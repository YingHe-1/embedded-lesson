#include "stm32f4xx.h"
#include "delay.h"
#include "led.h"
#include "key.h"
#include "exti.h"
char led_status=0;  
void main(void)
{
 
  exti_init();
  led_init();                                                 
  key_init();                                                 
  while(1){                                                     
    if(led_status==0){
      turn_on(D1);
      turn_off(D2);
    }else{
      turn_on(D2);
      turn_off(D1);
    }
      
  }
}  







  
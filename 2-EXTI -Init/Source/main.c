 /*********************************************************************************************
* 文件：main.c
* 作者：chennian 2017.11.02
* 说明：D1、D2、D3、D4驱动实验代码    
* 功能：
* 修改：

*********************************************************************************************/

/*********************************************************************************************
* 头文件
*********************************************************************************************/
#include "stm32f4xx.h"
#include "delay.h"
#include "led.h"
#include "key.h"
#include "exti.h"
/*********************************************************************************************
* 名称：main()
* 功能：LED实验逻辑代码
* 参数：无
* 返回：无
* 修改：
*********************************************************************************************/

int count = 0;
char led_status=0;         //led状态量
void main(void)
{

  led_init();                            //初始化LED控制管脚
  key_init();                           //初始化按键检测管脚
  exti_init();
//扩展1
  while(1){
    if(count==1){
      turn_on(D1);
    }
    else if(count==2){
      turn_on(D2);
      turn_off(D1);
    }
    else if(count==3){
      turn_on(D3);
      turn_off(D2);
    }
    else if(count==4){
      turn_on(D4);
      turn_off(D3);
    }
    else if(count==5){
      turn_on(D1);
      turn_on(D2);
      turn_on(D3);
      turn_on(D4);
    }else if(count==6){
      if(led_status==0){
        turn_on(D1);
        turn_on(D3);
        turn_off(D2);
        turn_off(D4);
      }
      else if(led_status==1){
        turn_on(D2);
        turn_on(D4);
        turn_off(D1);
        turn_off(D3);
      } 
    }else{
      count=0;
      turn_off(D1);
      turn_off(D2);
      turn_off(D3);
      turn_off(D4); 
    }
  }
  
}
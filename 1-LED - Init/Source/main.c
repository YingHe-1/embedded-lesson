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
/*********************************************************************************************
* 名称：main()
* 功能：LED实验逻辑代码
* 参数：无
* 返回：无
* 修改：
*********************************************************************************************/
char led_status = 0;
void check(){
    if(get_key_status() == K1_PREESED){                         //检测K1被按下
      delay_count(60);
      turn_on(D1);
      while(get_key_status() == K1_PREESED);                  //等待按键松开
          turn_off(D1);
          led_status = 0;
    }else if(get_key_status() == K2_PREESED){                         //检测K2被按下
      delay_count(60);
      turn_on(D2);
      while(get_key_status() == K2_PREESED);                  //等待按键松开
         turn_off(D2);
         led_status = 0;
    }else if(get_key_status() == K3_PREESED){                        
      delay_count(60);
      turn_on(D3);
      while(get_key_status() == K3_PREESED);                  //等待按键松开
          turn_off(D3);
          led_status = 0;

    }else if(get_key_status() == K4_PREESED){                         //检测K4被按下
      delay_count(60);
      turn_on(D4);
      while(get_key_status() == K4_PREESED);
         turn_off(D4);
         led_status = 0;
    }
 }
void main(void)
{
                                           //声明一个表示LED状态的变量
  led_init();                            
  //初始化LED控制管脚
  key_init();
  //初始化按键检测管脚
  while(1){                                                     //循环体
    if(led_status == 0){    
      turn_on(D1);
      delay_count(5000);
      turn_off(D1);
      check();
      delay_count(5000);
      turn_on(D2);
      delay_count(5000);
      turn_off(D2);
      check();
      delay_count(5000);
      turn_on(D3);
      delay_count(5000);
      turn_off(D3);
      check();
      delay_count(5000);
      turn_on(D4);
      delay_count(5000);
      turn_off(D4);
      check();
                                     
    }
  }
}
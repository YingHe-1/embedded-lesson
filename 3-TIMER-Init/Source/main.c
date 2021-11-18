/*********************************************************************************************
* 文件：main.c
* 作者：chennain 2017.11.02
* 说明：    
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
#include "timer.h"
char led_status;                                            //声明一个表示LED灯状态的变量
char led_status2;
char led_status3;
/*********************************************************************************************
* 名称：main()
* 功能：LED驱动实验逻辑代码
* 参数：无
* 返回：无
* 修改：
*********************************************************************************************/

int count = 0;

void key(){
  if(get_key_status() == K3_PREESED){                           //检测K3被按下
    delay_count(500);                                           //延时消抖
    if(get_key_status() == K3_PREESED){                         //确认K3被按下
      while(get_key_status() == K3_PREESED);                    //等待按键松开
      //led_status = !led_status;                                 //翻转led状态标志
      count++;
    }
  }
}

void main(void)
{
  led_status=-1;
  led_init();                            //初始化LED控制管脚
  key_init();                           //初始化按键检测管脚
  timer3_init(2500-1, 16800-1);
  timer4_init(5000-1, 16800-1);
//扩展1
  while(1){
    key();
    if(count==0){
      TIM_Cmd(TIM4, ENABLE);
        turn_off(D1);
        turn_off(D2);
      if(led_status3 == 0){                                        //LED灯为状态0
        turn_on(D3);                                              //D3开
        turn_off(D4);                                             //D4关
      }
      else{                                                       //LED灯为状态1
        turn_off(D3);                                             //D3关
        turn_on(D4);                                              //D4开
      }
      TIM_Cmd(TIM4, DISABLE);
    }
    else if(count==1){
          TIM_Cmd(TIM3, ENABLE);                                  
          turn_off(D1);
          turn_off(D2); 
          turn_off(D3);
          turn_off(D4);
      if(led_status == 0){
          turn_on(D1);        
      }  
      else if(led_status == 1){
          turn_on(D2); 
      }
      else if(led_status == 2){
          turn_on(D3);
      }
      else if(led_status == 3){
          turn_on(D4);
      }
      TIM_Cmd(TIM3, DISABLE);
    } 
    else if(count==2){ 
          TIM_Cmd(TIM3, ENABLE);                                  
          if(led_status2 == 0){
            turn_on(D1);
            turn_on(D2); 
            turn_on(D3);
            turn_on(D4);
          }
          else if(led_status2 == 1){
            turn_off(D1);
            turn_off(D2); 
            turn_off(D3);
            turn_off(D4);
          }
          TIM_Cmd(TIM3, DISABLE);
    }
    else if(count==3){
      count=0;
    }
  }
  
}


/*********************************************************************************************
* �ļ���delay.c
* ˵������ʱ����     
* �޸ģ�
*********************************************************************************************/

/*********************************************************************************************
* ͷ�ļ�
*********************************************************************************************/
#include "delay.h"

/*********************************************************************************************
* ���ƣ�delay_count
* ���ܣ�������ʱ
* ������times------������ֵ
* ���أ���
* �޸ģ���
*********************************************************************************************/
void delay_count(uint32_t times)
{
  uint32_t temp = 0;                                            //������ʱ��������ʼ��
  
  while(times --){                                              //times�Լ����ж��Ƿ�Ϊ��
    temp = 1000;                                                //��ֵ1000
    while(temp --);                                             //temp�Լ����ж��Ƿ�Ϊ��
  }
}
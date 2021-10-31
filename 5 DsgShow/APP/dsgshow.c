#include "dsgshow.h"

void DsgShowInit(){
	GPIO_InitTypeDef GPIO_InitStructure;
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA|RCC_APB2Periph_GPIOB|RCC_APB2Periph_GPIOC,ENABLE);
	
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_15|GPIO_Pin_14|GPIO_Pin_13|
	GPIO_Pin_12|GPIO_Pin_11|GPIO_Pin_10|GPIO_Pin_9|GPIO_Pin_8;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_10MHz;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_Init(GPIOB,&GPIO_InitStructure);
	
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0|GPIO_Pin_1|GPIO_Pin_2|GPIO_Pin_3|
	GPIO_Pin_4|GPIO_Pin_5|GPIO_Pin_6|GPIO_Pin_7;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_2MHz;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_Init(GPIOC,&GPIO_InitStructure);
	
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8|GPIO_Pin_9;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;
	GPIO_Init(GPIOC,&GPIO_InitStructure);
		
}

void DsgShowNum(){
		u16 i;
		GPIO_Write(GPIOB,0x0100);
		GPIO_Write(GPIOC,0xF9);
		for(i=0;i<400;i++);		
		GPIO_Write(GPIOB,0x0200);
		GPIO_Write(GPIOC,0xA4);
		for(i=0;i<400;i++);
		GPIO_Write(GPIOB,0x0400);
		GPIO_Write(GPIOC,0xB0);
		for(i=0;i<400;i++);
		GPIO_Write(GPIOB,0x0800);
		GPIO_Write(GPIOC,0x99);
		for(i=0;i<400;i++);
		GPIO_Write(GPIOB,0x1000);
		GPIO_Write(GPIOC,0x92);
		for(i=0;i<400;i++);	
		GPIO_Write(GPIOB,0x2000);
		GPIO_Write(GPIOC,0x82);
		for(i=0;i<400;i++);	
		GPIO_Write(GPIOB,0x4000);
		GPIO_Write(GPIOC,0xF8);
		for(i=0;i<400;i++);	
		GPIO_Write(GPIOB,0x8000);
		GPIO_Write(GPIOC,0x80);
		for(i=0;i<400;i++);		
}

void DsgShowDate(){
	u16 i;

		GPIO_Write(GPIOB,0x0100);
		GPIO_Write(GPIOC,0xA4);
		for(i=0;i<400;i++);
		GPIO_Write(GPIOB,0x0200);
		GPIO_Write(GPIOC,0xC0);
		for(i=0;i<400;i++);
		GPIO_Write(GPIOB,0x0400);
		GPIO_Write(GPIOC,0xA4);
		for(i=0;i<400;i++);	
		GPIO_Write(GPIOB,0x0800);
		GPIO_Write(GPIOC,0x79);
		for(i=0;i<400;i++);	
		GPIO_Write(GPIOB,0x1000);
		GPIO_Write(GPIOC,0xF9);
		for(i=0;i<400;i++);
		GPIO_Write(GPIOB,0x2000);
		GPIO_Write(GPIOC,0x40);
		for(i=0;i<400;i++);
		GPIO_Write(GPIOB,0x4000);
		GPIO_Write(GPIOC,0xF9);
		for(i=0;i<400;i++);
		GPIO_Write(GPIOB,0x8000);
		GPIO_Write(GPIOC,0xA4);
		for(i=0;i<400;i++);			
	
}

void DsgShowK0(){
		u32 i;
		GPIO_Write(GPIOB,0x0100);
		GPIO_Write(GPIOC,0xF9);
		for(i=0;i<600000;i++);		
		GPIO_Write(GPIOB,0x0200);
		GPIO_Write(GPIOC,0xA4);
		for(i=0;i<600000;i++);
		GPIO_Write(GPIOB,0x0400);
		GPIO_Write(GPIOC,0xB0);
		for(i=0;i<600000;i++);
		GPIO_Write(GPIOB,0x0800);
		GPIO_Write(GPIOC,0x99);
		for(i=0;i<600000;i++);
		GPIO_Write(GPIOB,0x1000);
		GPIO_Write(GPIOC,0x92);
		for(i=0;i<600000;i++);	
		GPIO_Write(GPIOB,0x2000);
		GPIO_Write(GPIOC,0x82);
		for(i=0;i<600000;i++);	
		GPIO_Write(GPIOB,0x4000);
		GPIO_Write(GPIOC,0xF8);
		for(i=0;i<600000;i++);	
		GPIO_Write(GPIOB,0x8000);
		GPIO_Write(GPIOC,0x80);
		for(i=0;i<600000;i++);	
}

void DsgShowK1(){
	u32 i;
  GPIO_Write(GPIOB,0x0100);
  GPIO_Write(GPIOC,0x80);
  for(i =0;i<600000;i++);
  GPIO_Write(GPIOB,0x0200);
  GPIO_Write(GPIOC,0x82);
  for(i =0;i<600000;i++);
  GPIO_Write(GPIOB,0x0400);
  GPIO_Write(GPIOC,0x99);
  for(i =0;i<600000;i++);
  GPIO_Write(GPIOB,0x0800);
  GPIO_Write(GPIOC,0xa4);
  for(i =0;i<600000;i++);
  GPIO_Write(GPIOB,0x1000);
  GPIO_Write(GPIOC,0xf8);
  for(i =0;i<600000;i++);
  GPIO_Write(GPIOB,0x2000);
  GPIO_Write(GPIOC,0x92);
  for(i =0;i<600000;i++);
  GPIO_Write(GPIOB,0x4000);
  GPIO_Write(GPIOC,0xb0);
  for(i =0;i<600000;i++);
  GPIO_Write(GPIOB,0x8000);
  GPIO_Write(GPIOC,0xf9);
  for(i =0;i<600000;i++);
}

void StatusA(){
	u16 i;
	for(i=0;i<60;i++){
			DsgShowNum();
	}	
	while(1){
			DsgShowDate();
			BtnKey();
	}
}

void delay(u32 i)
{
	while(i--);
}

void BtnKey(){
		if(GPIO_ReadInputDataBit(GPIOC,GPIO_Pin_8)==1){
			delay(10);
			if(GPIO_ReadInputDataBit(GPIOC,GPIO_Pin_8)==1){
				DsgShowK0();
				StatusA();
			}
			while(GPIO_ReadInputDataBit(GPIOC,GPIO_Pin_8)==1);
		}
		if(GPIO_ReadInputDataBit(GPIOC,GPIO_Pin_9)==1){
			delay(10);
			if(GPIO_ReadInputDataBit(GPIOC,GPIO_Pin_9)==1){
				DsgShowK1();
				StatusA();
			}
			while(GPIO_ReadInputDataBit(GPIOC,GPIO_Pin_9)==1);
		}
}



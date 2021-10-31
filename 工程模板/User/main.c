#include "public.h"

int main()
{
	u32 i;
	RCC->APB2ENR=0x0010;
	GPIOC->CRL=0x11111111;
	while(1)
	{
		GPIOC->ODR=0x0000;
		for(i=0;i<600000;i++);
		GPIOC->ODR=0xFFFF;
		for(i=0;i<600000;i++);
	}

        
}


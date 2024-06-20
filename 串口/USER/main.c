#include "stm32f4xx.h"
#include "delay.h"
#include "uart.h"
int main(void)
{
	uint8_t i;
	receive_t rece;
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);//采用中断分组2
	uart_init(115200);
	printf("你好世界\r\n");
	while(1)
	{
		for(i=0;i<rece.len;i++)
		{
			printf("#%x\t",&rece.buff[i]);
		}
	}
}






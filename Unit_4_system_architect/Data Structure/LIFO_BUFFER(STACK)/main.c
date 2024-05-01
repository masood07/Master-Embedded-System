/*
 * main.c
 *
 *  Created on: 4 Aug 2023
 *      Author: TAREK MASOOD
 */

#include "lifo.h"
unsigned int buf_1[5];//20 bytes (elements) if i used pointer to char
int main()
{
	unsigned int var,temp=0,top=-1;
	lifo_buf_t uart;
	lifo_init(&uart,buf_1,5);
	printf("num of elements: %d\n\n",uart.count);
	for (var = 0; var < 7; ++var) {
		if (var==4)
		{
			if(lifo_top(&uart,&top)==lifo_no_error)
				printf("\nuart_lifo top : %d\n\n",top);
		}
		if (lifo_push(&uart,var)==lifo_no_error)
		{
			printf("uart_lifo add: %d\n",var);
		}

	}
	printf("\n\nnum of elements: %d\n\n",uart.count);
	printf("=================================\n");
	for (var = 0; var < 7; ++var) {
		if (lifo_pop(&uart,(unsigned int*)&temp)==lifo_no_error)
			printf("uart_lifo get: %d\n",temp);
	}
	return 0;
}


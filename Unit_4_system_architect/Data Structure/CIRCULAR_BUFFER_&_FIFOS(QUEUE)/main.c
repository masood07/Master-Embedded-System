#include "circ_fifo.h"
int main()
{
	element_type var,temp;
	fifo_buf_t uart;
	if(fifo_init(&uart,buf_1,width)==fifo_no_error)
	{
		printf("init is --------done\n====================================\n");
		for (var = 0; var < 7; ++var) {
			if(fifo_enqueue(&uart,var)==fifo_no_error)
			{
				printf("fifo_enqueue : %x\n",var);
			}
			else
			{
				printf("fifo_enqueue ------failed\n");
			}
		}
	}
	fifo_print(&uart);
	printf("==============fifo dequeue==============\n");
	for (var = 0; var < 2; ++var) {
		if(fifo_dequeue(&uart,&temp)==fifo_no_error)
		{
			printf("fifo_dequeue : %x\n",temp);
		}
		else
		{
			printf("fifo_dequeue ------failed\n");
		}
	}
	fifo_print(&uart);
	return 0;
}

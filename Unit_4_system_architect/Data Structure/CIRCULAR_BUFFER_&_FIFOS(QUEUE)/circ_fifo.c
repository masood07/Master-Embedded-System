/*
 * circ_fifo.c
 *
 *  Created on: 4 Aug 2023
 *      Author: TAREK MASOOD
 */
#include "circ_fifo.h"
fifo_status_t fifo_init(fifo_buf_t*fifo_buf,element_type* buf,uint32_t length)
{
	//check if buf valid
	if(buf==NULL)
		return fifo_null;
	fifo_buf->base=fifo_buf->head=fifo_buf->tail=buf;
	fifo_buf->count=0;
	fifo_buf->length=width;
	return fifo_no_error;
}
fifo_status_t fifo_enqueue(fifo_buf_t*fifo_buf,element_type item)
{
	//check buf is valid
	if(!fifo_buf->base ||! fifo_buf->head || ! fifo_buf->tail)
		return fifo_null;
	//check if fifo is full
	if(fifo_is_full(fifo_buf)==fifo_full)
		return fifo_full;
	//check if tail point to last element of buf
	if(fifo_buf->head==fifo_buf->base+fifo_buf->length*sizeof(element_type))
		fifo_buf->head=fifo_buf->base;
	//add new element
	*fifo_buf->head++=item;
	fifo_buf->count++;
	return fifo_no_error;
}
fifo_status_t fifo_dequeue(fifo_buf_t*fifo_buf,element_type* item)
{
	//check buf is valid
	if(!fifo_buf->base ||! fifo_buf->head || ! fifo_buf->tail)
		return fifo_null;
	//check if buf empty
	if(fifo_is_full(fifo_buf)==fifo_empty)
		return fifo_empty;
	//check if tail point to last element of buf
	if(fifo_buf->tail==fifo_buf->base+fifo_buf->length*sizeof(element_type))
		fifo_buf->tail=fifo_buf->base;
	//dequeue element
	*item=*fifo_buf->tail;
	fifo_buf->tail++;
	fifo_buf->count-- ;

	return fifo_no_error;
}
fifo_status_t fifo_is_full(fifo_buf_t*fifo_buf)
{
	//check validity
	if(!fifo_buf->base ||! fifo_buf->head || ! fifo_buf->tail)
		return fifo_null;
	//check if full
	if(fifo_buf->count == fifo_buf->length)
		return fifo_full;
	if(fifo_buf->count == 0)
		return fifo_empty;
	return fifo_not_full;
}
void fifo_print(fifo_buf_t* fifo_buf)
{
	if(fifo_is_full(fifo_buf)==fifo_empty)
		printf("fifo is empty\n");
	else{
		element_type i=0;
		printf("\n===============fifo print==============\n");
	while(fifo_buf->head>fifo_buf->tail+i)
		printf("\t%d\n",*(fifo_buf->tail+i++));
	}

}



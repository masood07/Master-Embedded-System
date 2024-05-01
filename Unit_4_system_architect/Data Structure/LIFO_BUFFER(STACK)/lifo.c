/*
 * lifo.c

 *
 *  Created on: 4 Aug 2023
 *      Author: TAREK MASOOD
 */
#include "lifo.h"

lifo_status_t lifo_push(lifo_buf_t *lifo_buf,unsigned int item )
{
	//check if lifo_buf is valid
	if (!lifo_buf->header||!lifo_buf->base)
		return lifo_null;
	//check if lifo_buf is full
	if (/*lifo_buf->count==lifo_buf->length*/lifo_buf->header >= (lifo_buf->base + lifo_buf->length))
		return lifo_full;
	*lifo_buf->header++=item;
	lifo_buf->count++;
	return lifo_no_error;
}
lifo_status_t lifo_pop(lifo_buf_t *lifo_buf,unsigned int *item )
{
	//check if lifo_buf is valid
	if (!lifo_buf->header||!lifo_buf->base)
		return lifo_null;
	if(lifo_buf->count==0)
	return lifo_empty;
	lifo_buf->header--;
	//return value that you pop
	*item=*lifo_buf->header;//item = address that header point to
	lifo_buf->count--;
	return lifo_no_error;
}
lifo_status_t lifo_top(lifo_buf_t *lifo_buf,unsigned int *item)
{
	//check if lifo_buf is valid
	if (!lifo_buf->header||!lifo_buf->base)
		return lifo_null;
	*item=*(lifo_buf->header-1);
	return lifo_no_error;
}
lifo_status_t lifo_init(lifo_buf_t *lifo_buf,unsigned int *buf , unsigned int length){
	//if dynamic allocation consider null
	if(buf==NULL)
		return lifo_null;
	lifo_buf->base=lifo_buf->header=(unsigned char*)buf;
	lifo_buf->length=length;
	lifo_buf->count=0;
	return lifo_no_error;
}


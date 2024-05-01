/*
 * lifo.h
 *
 *  Created on: 4 Aug 2023
 *      Author: TAREK MASOOD
 */

#ifndef LIFO_H_
#define LIFO_H_
#include "stdio.h"
//type definitions
typedef struct{
	unsigned char *base;
	unsigned char *header;
	unsigned int length;
	unsigned int count;
}lifo_buf_t;
typedef enum{
	lifo_no_error,
	lifo_full,
	lifo_empty,
	lifo_null
}lifo_status_t;
//APIS
lifo_status_t lifo_push(lifo_buf_t *lifo_buf,unsigned int item );
lifo_status_t lifo_pop(lifo_buf_t *lifo_buf,unsigned int *item );
lifo_status_t lifo_top(lifo_buf_t *lifo_buf,unsigned int *item);
lifo_status_t lifo_init(lifo_buf_t *lifo_buf,unsigned int *buf , unsigned int length);
#endif /* LIFO_H_ */

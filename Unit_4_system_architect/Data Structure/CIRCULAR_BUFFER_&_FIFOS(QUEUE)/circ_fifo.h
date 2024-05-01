/*
 * circ_fifo.h
 *
 *  Created on: 4 Aug 2023
 *      Author: TAREK MASOOD
 */
#ifndef CIRC_FIFO_H_
#define CIRC_FIFO_H_
#include <stdio.h>
#include "stdint.h"
#define width 5
typedef uint8_t element_type ;//user select the element type
element_type buf_1[width];
//type definitions
typedef struct
{
	element_type *head;
	element_type *tail;
	element_type *base;
	uint32_t length;
	uint32_t count;
}fifo_buf_t;
typedef enum
{
	fifo_no_error,
	fifo_full,
	fifo_not_full,
	fifo_null,
	fifo_empty
}fifo_status_t;
//APIs
fifo_status_t fifo_init(fifo_buf_t*fifo_buf, element_type *buf ,uint32_t length);
fifo_status_t fifo_enqueue(fifo_buf_t*fifo_buf,element_type item);
fifo_status_t fifo_dequeue(fifo_buf_t*fifo_buf,element_type* item);
fifo_status_t fifo_is_full(fifo_buf_t*fifo_buf);
void fifo_print(fifo_buf_t* fifo_buf);
#endif

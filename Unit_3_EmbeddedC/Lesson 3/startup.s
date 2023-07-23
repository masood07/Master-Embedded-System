/*
startup_cortexM3.s
ENG:Tarek
*/

/*SRAM 0x20000000 (0x20000000 ==> 0x20001000) for .bss and .data */
.globl _reset;
.section .vectors

.word	STACK_TOP	/*STACK TOP*/
.word	_reset      /* 1 Reset */
.word	vector_handler /*2 NMI_INTERUPT*/
.word	vector_handler /*3 HARDFAULT_INTERUPT*/
.word	vector_handler /*4 MEMMANAGE_INTERUPT*/
.word	vector_handler /*5 BUSFAULT_INTERUPT*/
.word	vector_handler /*6 USAGEFAULT_INTERUPT*/
.word	vector_handler /*7 RESERVED_INTERUPT*/
.word	vector_handler /*8 RESERVED_INTERUPT*/
.word	vector_handler /*9 RESERVED_INTERUPT*/
.word	vector_handler /*10 RESERVED_INTERUPT*/
.word	vector_handler /*11 SVCALL_INTERUPT*/
.word	vector_handler /*12 DEBUG MONITOR_INTERUPT*/
.word	vector_handler /*13 RESERVED_INTERUPT*/
.word	vector_handler /*14 PENDSV_INTERUPT*/
.word	vector_handler /*15 SYSTIC_INTERUPT*/

.section .text

_reset:
	bl main
	b .
.thumb_func
vector_handler:
	b _reset
	
#include<stdint.h>
/*
after rom_code pc will point to the flash where vector table should be place 
first step to initiallize sp by address and put adresses of interupt handler
we will define array and put its addresse at the the begining of the flash
*/
extern int32_t main(void);
extern uint32_t STACK_TOP;
void RESET_HANDLER(void);

void DEFAULT_HANDLER(void)
{
	RESET_HANDLER();
}
//weak ==> definition can be override by customer // alias ==>  interrupt definition 
void NMI_HANDLER(void) __attribute__((weak,alias("DEFAULT_HANDLER")));; 
void HARDFAULT_HANDLER(void)__attribute__((weak,alias("DEFAULT_HANDLER")));;
void MEMMANAGE_HANDLER(void)__attribute__((weak,alias("DEFAULT_HANDLER")));;
void BUSFAULT_HANDLER(void)__attribute__((weak,alias("DEFAULT_HANDLER")));;
void USAGEFAULT_HANDLER(void)__attribute__((weak,alias("DEFAULT_HANDLER")));;

uint32_t vector [] __attribute__((section(".vectors")))		= {
(uint32_t)&STACK_TOP,
(uint32_t)&RESET_HANDLER,
(uint32_t)&NMI_HANDLER,
(uint32_t)&HARDFAULT_HANDLER,
(uint32_t)&MEMMANAGE_HANDLER,
(uint32_t)&BUSFAULT_HANDLER,
(uint32_t)&USAGEFAULT_HANDLER
};

extern uint32_t _E_text;
extern uint32_t _S_data;
extern uint32_t _E_data;
extern uint32_t _S_bss;
extern uint32_t _E_bss;
void RESET_HANDLER(void)
{
	uint32_t i=0;
	//copy .data to sram
	uint32_t DATA_SIZE = (uint8_t*)&_E_data - (uint8_t*)&_S_data ; //size of .data in byte
	/*pointer to the beginig of .data in (LA) flash and pointer to the beging of .data at sram (VA)*/
	uint8_t* p_src = (uint8_t*)&_E_text;
	uint8_t* p_des = (uint8_t*)&_S_data;
	while(i++ < DATA_SIZE)
	{
		*p_des++=*p_src++;
	}
	//init .bss in sram =0
	i=0;
	uint32_t BSS_SIZE=(uint8_t*)&_E_bss-(uint8_t*)&_S_bss;
	p_des = (uint8_t*) &_S_bss;
	while(i++ < BSS_SIZE)
	{
		*p_des++=(uint8_t)0;
	}
	main();
}



#include <stdint.h>
extern void main(); 
void Reset(void);
void Default_handler(void)
{
	Reset();
}
void NMI(void)__attribute__((weak,alias("Default_handler")));;
void Hf(void)__attribute__((weak,alias("Default_handler")));;
void Mmf(void)__attribute__((weak,alias("Default_handler")));;
//define unintiallized golabal array of size 1024 byte
static uint8_t Stack_top[1024];
void (*const vector[])(void)__attribute__((section(".vectors")))={
	(void (*)(void))((uint32_t)Stack_top+sizeof(Stack_top)),
	&Reset,
	&NMI,
	&Hf,
	&Mmf	
};
extern uint32_t _E_TEXT;
extern uint32_t _S_DATA;
extern uint32_t _E_DATA;
extern uint32_t _S_BSS;
extern uint32_t _E_BSS;

void Reset(void)
{
uint32_t i=0;
uint32_t data_size=(uint8_t*)&_S_DATA - (uint8_t*)&_S_DATA ;
uint8_t *p_src= (uint8_t*)&_E_TEXT;
uint8_t *p_des= (uint8_t*)&_S_DATA;
while(i++<data_size)
{
	*p_des++=*p_src++;
}
i=0;
uint32_t bss_size=(uint8_t*)&_E_BSS - (uint8_t*)&_E_BSS ;
p_des= (uint8_t*)&_S_BSS;
while(i++<bss_size)
{
	*p_des++=0;
}
main();
}
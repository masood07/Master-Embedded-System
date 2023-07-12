#define	UART0_DR	*(volatile unsigned int*)((unsigned int*)0x101f1000)

void uart_send_str(unsigned char *str)
{
	while(*str != '\0')
	{
		UART0_DR=(unsigned int)*str;
		str++;
	}
}
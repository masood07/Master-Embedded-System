#include "uart.h"
unsigned char str [100]="learn_in_depth:<Tarek>";
unsigned char const str1 [100]="learn_in_depth:<Tarek>";
void main(void)
{
	uart_send_str(str);
}
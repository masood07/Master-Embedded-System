#include <stdint.h>
typedef volatile uint32_t vuint32_t;
// register address
#define GPIO_BASE 0x40010800
#define BASE_RCC 0x40021000
#define RCC_APB2ENR  *(volatile uint32_t *) (BASE_RCC +0x18)
#define ODR_GPIO  *(volatile uint32_t *) (GPIO_BASE + 0x0C)
#define GPIO_CRH  *(volatile uint32_t *) (GPIO_BASE + 0x04)
//access all register pins or single pin then its shared memory
typedef union
{
	vuint32_t all_pins;
	struct
	{
		vuint32_t res:13;//0 -> 12
		vuint32_t pin_13:1;
	}pin;
}R_ODR_t;
int main(void)
{
	volatile R_ODR_t* R_ODR=(volatile R_ODR_t*)	(GPIO_BASE + 0x0C);
	RCC_APB2ENR |= 1<<2;
	GPIO_CRH &= 0xff0fffff;
	GPIO_CRH |= 0x00200000;
	while(1)
	{
		//ODR_GPIO ^= 1<<13;
		R_ODR->pin.pin_13=1;
		for( int i=0;i<500;i++);
		R_ODR->pin.pin_13=0;
		//ODR_GPIO ^=1<<13;
		for( int i=0;i<500;i++);
	}
}

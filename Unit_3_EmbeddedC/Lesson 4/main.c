typedef volatile unsigned long vuint32_t;
#define SYSCTL_base	0x400FE000
#define GPIOF_base	0x40025000
#define SYSCTL_RCGC2_R		*(vuint32_t*)(SYSCTL_base+0x108)
#define GPIO_PORTF_DIR_R	*(vuint32_t*)(GPIOF_base+0x400)
#define GPIO_PORTF_DEN_R	*(vuint32_t*)(GPIOF_base+0x51C)
#define GPIO_PORTF_DATA_R	*(vuint32_t*)(GPIOF_base+0x3FC)

void main()
{
	volatile unsigned long i;
	SYSCTL_RCGC2_R = 0x20;
	for ( i = 0; i < 200; ++i)
	GPIO_PORTF_DIR_R |= 1<<3;
	GPIO_PORTF_DEN_R |= 1<<3;
	while(1)
	{
		GPIO_PORTF_DATA_R ^= 1<<3;
		for ( i = 0; i < 200000; ++i);
		GPIO_PORTF_DATA_R ^= 1<<3;
		for ( i = 0; i < 200000; ++i);
	}
}
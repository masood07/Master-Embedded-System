MEMORY
{
	flash (RX) : ORIGIN = 0x08000000 , LENGTH = 128K
	sram (RWX) : ORIGIN = 0x20000000 , LENGTH = 20K
}

SECTIONS
{
	.text :
	{
		*(.vectors*)
		*(.text*)
		*(.rodata)
		_E_text = . ;
	} > flash
	

	.data :
	{
		_S_data = . ;
		*(.data)
		_E_data = . ;
	}> sram AT> flash


	.bss :
	{
		_S_bss = . ;
		*(.bss) *(COMMON)
		_E_bss = . ;
		. = . + 0x1000 ;
		STACK_TOP = . ;		
	} > sram
   
}
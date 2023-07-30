MEMORY
{
	flash(rx) : ORIGIN = 0x00000000, LENGTH = 128K
	sram(rx) : ORIGIN = 0x20000000, LENGTH = 20K
}
SECTIONS
{
	.text :
	{
		*(.vectors*)
		*(.text*)
		*(.rodata)
		_E_TEXT = . ;
	} > flash

	.data :
	{
		_S_DATA = . ;
		*(.data*)
		_E_DATA = . ;
	} > sram AT> flash
	.bss :
	{
		_S_BSS = . ;
		*(.bss) *(COMMON)
		_E_BSS = . ;
	}>sram
}
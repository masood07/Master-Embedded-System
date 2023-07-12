ENTRY(reset)

MEMORY
{
	mem(rwx) : ORIGIN = 0x00000000, LENGTH = 64M
}

SECTIONS
{
	. = 0x10000;
	.startup . :
	{
		startup.o(.text)
	}>mem
	.txt :
	{
		*(.text)
	}>mem
	.data :
	{
		*(.data)
	}>mem
	.bss :
	{
		*(.bss)
	}>mem
	.rodata :
	{
		*(.rodata)
	}>mem
	. = . + 0x1000 ;
	stack_top = .;
}
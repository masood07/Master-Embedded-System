#target is to build learn_in_depth.bin
CC=arm-none-eabi-
CFLAGS=-gdwarf-2 -mthumb -mcpu=cortex-m3
INCS=-I .
LIBS= #EX:static library
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)	
AS=$(wildcard *.s) # take all asembly files and store them in AS with the help of wildcard if you want files in another dir $(wildcard dir/*.s) 
ASO=$(AS:.s=.o) #take all as files and turn them into objects
project_name=Toggle_led_cortexM3
all: $(project_name).bin
	@echo "		==============build is done=============="

%.o: %.c
	$(CC)gcc.exe $(CFLAGS) -c $(INCS) $< -o $@

%.o: %.s
	$(CC)as.exe $(CFLAGS) $< -o $@

$(project_name).elf: $(OBJ) $(ASO)
	$(CC)ld.exe -T linker_script.ld $(LIBS) $(OBJ) $(ASO) -o $@ -Map=map_file.map

$(project_name).bin: $(project_name).elf
	$(CC)objcopy.exe -O binary $< $@

# this isnt incremental build because we remove all objects not the one who changed
clean_all: 
	rm *.o *.bin *.elf

clean:
	rm *.bin *.elf
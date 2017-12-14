PROG=prog.elf

CLEAN=$(PROG) $(PROG).dump $(PROG).bin

all: $(PROG) $(PROG).dump $(PROG).bin

$(PROG): main.o variant.o
	gcc -o $(PROG) main.o variant.o

%.o: %.c
	gcc -c -o $@ $^

$(PROG).dump: $(PROG)
	objdump -x $(PROG) > $@

$(PROG).bin: $(PROG)
	objcopy -O binary $(PROG) $(PROG).bin


clean:
	rm *.o *.dump *.bin $(PROG)

SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)

all:test.lof

CC = sh-elf-gcc
LINK = sh-elf-ld
#RUN = sh-elf-run
RUN = sh-elf-run --memory-fill 0xcc --memory-region 0x1b000,0x5000
DIFF = diff
TOUCH = touch
DOS2UNIX = dos2unix.csh
DOGV = wdog.exe -v

%.o : %.c
	$(DOGV) $(CC) -o $@ -c $<

%.log : %.elf
	$(DOGV) $(RUN) ./$< > $@
	$(DOS2UNIX) $@

%.lof : %.log
	$(DOGV) $(DIFF) $< $@
	$(TOUCH) $@

START_O = /home/khasegawa/lang/53_GNU_tool/gcc_cross/SH/tool/start.o

LIBGCC = /media/ca850f52-0605-42a7-9fd4-899de9edf461/work/GNU_LANG/lib/gcc/sh-elf/10.2.0/libgcc.a

LDSCRIPT = /home/khasegawa/lang/53_GNU_tool/gcc_cross/SH/tool/sample.x

test.elf:$(OBJS)
	$(DOGV) $(LINK) -o $@ $(START_O) $(OBJS) $(LIBGCC) -T $(LDSCRIPT)

clean:
	$(RM) *.o *.log *.exe *.elf *.s *.i *.stackdump core.* *~

test.lof:test.log
a.s:a.i
b.s:b.i
c.s:c.i



SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)

all:test.lof

CC = sh-elf-gcc
LINK = sh-elf-ld
RUN = sh-elf-run
DIFF = diff
TOUCH = touch
DOS2UNIX = dos2unix.csh
DOG = wdog.exe
DOGV = wdog.exe -v

%.o : %.c
	$(DOGV) $(CC) -o $@ -c $<

%.lof : %.log
	$(DOGV) $(DIFF) $< $@
	$(TOUCH) $@

START_O = /media/ca850f52-0605-42a7-9fd4-899de9edf461/work/test_sh.010/start.o

LIBGCC = /media/ca850f52-0605-42a7-9fd4-899de9edf461/work/GNU_LANG/lib/gcc/sh-elf/10.2.0/libgcc.a

LDSCRIPT = /media/ca850f52-0605-42a7-9fd4-899de9edf461/work/test_sh.010/test010.x

test.log:$(OBJS)
	-if export LANG=C ; $(DOG) $(LINK) $(START_O) $(OBJS) $(LIBGCC) -T $(LDSCRIPT) 2> $@ ; then \
		$(RM) $@ ; \
	else \
		$(DOS2UNIX) $@; \
	fi
	line_conv.csh $@

clean:
	$(RM) *.o *.log *.elf *.s *.i *.stackdump core.* *~

test.lof:test.log
a.s:a.i
b.s:b.i
c.s:c.i



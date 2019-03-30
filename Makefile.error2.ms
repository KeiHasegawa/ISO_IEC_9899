SRCS = $(wildcard *.c)
ASMS = $(SRCS:.c=.asm)

all:test.lof

DIFF = diff
TOUCH = touch
DOS2UNIX = dos2unix.csh

CPP=hcpp.exe
ifeq ($(INTEL_DLL_EXTRA_OPTION),--x86)
CPP_FLAG = -D_MSC_VER \
-D_M_IX86 \
-DWIN32 \
-U_WIN64 \
-D__int64='long long' \
-D__cdecl= \
-D__pragma='\#pragma' \
-D_Bool=int \
-D__declspec\(a\)= \
-D__inline=inline \
-D__fastcall= \
-Dmain=_test_main \
-W 0
else
CPP_FLAG = -D_MSC_VER \
-U_M_IX86 \
-D_M_X64 \
-D_WIN64 \
-D__int64='long long' \
-D__cdecl= \
-D__pragma='\#pragma' \
-D_Bool=int \
-D__declspec\(a\)= \
-D__inline=inline \
-Dmain=_test_main \
-W 0
endif

CC1 = hcc1.exe
CC1_FLAG = --generator-option \( --debug --ms \)
LINK = vs_wrapper2
RUN =
DOG = wdog.exe
DOGV = wdog.exe -v

%.i : %.c
	$(DOGV) $(CPP) $(CPP_FLAG) $< | vs_header_conv.pl > $@

%.asm : %.i
	$(DOGV) $(CC1) -o $@ $< $(CC1_FLAG)

%.lof : %.log
	$(DOGV) $(DIFF) $< $@
	$(TOUCH) $@

test.log:$(ASMS)
	-if $(DOG) $(LINK) -o $(basename $@).exe $(ASMS) > $@ ; then \
		$(RM) $@ ; \
	else \
		$(DOS2UNIX) $@; \
	fi
	vs_error_conv $@

clean:
	$(RM) *.log *.exe *.asm *.i *.stackdump core.* a.out core *~

test.lof:test.log
a.asm:a.i
b.asm:b.i
c.ams:c.i

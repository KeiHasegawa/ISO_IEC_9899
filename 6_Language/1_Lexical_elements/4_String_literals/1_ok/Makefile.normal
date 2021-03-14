include ../../../../Makefile.ok

CPP_FLAG_FOR_JIS = $(EXTRA_CPP_FLAG) \
-D__declspec\(a\)= -D__cdecl= -D__inline__=inline -D__extension__= \
-D__attribute__\(a\)= -D__builtin_va_list='char*' \
-D__builtin_stdarg_start=__builtin_va_start -D__asm__=asm -W 0 -H \
-e iso2022_jp

test012.i:test012.c
	$(DOGV) $(CPP) -o $@ $< $(CPP_FLAG_FOR_JIS)

test013.i:test013.c
	$(DOGV) $(CPP) -o $@ $< $(CPP_FLAG_FOR_JIS)

test014.i:test014.c
	$(DOGV) $(CPP) -o $@ $< $(CPP_FLAG_FOR_JIS)

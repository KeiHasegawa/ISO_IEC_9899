include ../../../../Makefile.ok

CPP_FLAG_FOR_JIS = $(CPP_FLAG) -e iso2022_jp

test012.i:test012.c
	$(DOGV) $(CPP) -o $@ $< $(CPP_FLAG_FOR_JIS)

test013.i:test013.c
	$(DOGV) $(CPP) -o $@ $< $(CPP_FLAG_FOR_JIS)

test014.i:test014.c
	$(DOGV) $(CPP) -o $@ $< $(CPP_FLAG_FOR_JIS)
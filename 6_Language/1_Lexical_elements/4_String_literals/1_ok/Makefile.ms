include ../../../../Makefile.ok

CPP_FLAG_FOR_JIS = $(CPP_FLAG) -e iso2022_jp

test012.i:test012.c
	$(DOGV) $(CPP) $(CPP_FLAG_FOR_JIS) $< | vs_header_conv.pl > $@

test013.i:test013.c
	$(DOGV) $(CPP) $(CPP_FLAG_FOR_JIS) $< | vs_header_conv.pl > $@

test014.i:test014.c
	$(DOGV) $(CPP) $(CPP_FLAG_FOR_JIS) $< | vs_header_conv.pl > $@

test015.i:test015.c
	$(DOGV) $(CPP) $(CPP_FLAG_FOR_JIS) $< | vs_header_conv.pl > $@

test016.i:test016.c
	$(DOGV) $(CPP) $(CPP_FLAG_FOR_JIS) $< | vs_header_conv.pl > $@


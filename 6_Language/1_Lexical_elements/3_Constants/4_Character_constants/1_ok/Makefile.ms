include ../../../../../Makefile.ok

test000.asm : test000.i
	$(DOGV) --alarm 300 $(CC1) -o $@ $< $(CC1_FLAG)

test004.asm : test004.i
	$(DOGV) --alarm 300 $(CC1) -o $@ $< $(CC1_FLAG)

test005.asm : test005.i
	$(DOGV) --alarm 300 $(CC1) -o $@ $< $(CC1_FLAG)

CPP_FLAG_FOR_JIS = $(CPP_FLAG) -e iso2022_jp

test012.i : test012.c
	$(DOGV) $(CPP) $(CPP_FLAG_FOR_JIS) $< | vs_header_conv.pl > $@

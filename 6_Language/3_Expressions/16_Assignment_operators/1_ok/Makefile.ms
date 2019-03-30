include ../../../../Makefile.ok

test000.asm:test000.i
	$(DOGV) --alarm 300 $(CC1) -o $@ $< $(CC1_FLAG)

test003.asm:test003.i
	$(DOGV) --alarm 300 $(CC1) -o $@ $< $(CC1_FLAG)

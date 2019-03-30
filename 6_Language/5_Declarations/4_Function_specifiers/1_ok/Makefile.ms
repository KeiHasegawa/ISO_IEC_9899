include ../../../../Makefile.ok

test016.asm:test016.i
	$(DOGV) --alarm 300 $(CC1) -o $@ $< $(CC1_FLAG)

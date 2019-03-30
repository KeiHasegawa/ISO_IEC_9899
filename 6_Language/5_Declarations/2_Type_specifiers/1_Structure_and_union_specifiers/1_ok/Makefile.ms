include ../../../../../Makefile.ok

test010.asm:test010.i
	$(DOGV) --alarm 300 $(CC1) -o $@ $< $(CC1_FLAG)

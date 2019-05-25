include ../../../../../Makefile.ok

test010.asm:test010.i
	$(DOGV) --alarm 700 $(CC1) -o $@ $< $(CC1_FLAG)

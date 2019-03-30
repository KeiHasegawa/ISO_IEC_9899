include ../../../../../Makefile.ok

test053.asm:test053.i
	$(DOGV) --alarm 300 $(CC1) -o $@ $< $(CC1_FLAG)

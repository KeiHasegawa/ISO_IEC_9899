include ../../../../../Makefile.ok

test005.s:test005.i
	$(DOGV) --alarm 300 $(CC1) -o $@ $< $(CC1_FLAG)

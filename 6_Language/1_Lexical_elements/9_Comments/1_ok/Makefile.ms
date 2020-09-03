include ../../../../Makefile.ok

test000.exe:test000.asm
	$(DOGV) --alarm 300 $(LINK_CMD) -o $@ $<

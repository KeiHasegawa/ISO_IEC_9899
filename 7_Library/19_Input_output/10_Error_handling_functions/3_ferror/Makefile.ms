include ../../../../Makefile.ok

test000.log : test000.exe
	./$< < $(basename $<).c > $@
	$(DOS2UNIX) $@

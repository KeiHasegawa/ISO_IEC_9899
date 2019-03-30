include ../../../../Makefile.error

test000.log : test000.c
	-$(DOG) $(CPP) -o $(basename $@).i $< $(CPP_FLAG) 2> $@
	$(DOS2UNIX) $@

test000.i : test000.c
	-$(DOG) $(CPP) -o $@ $< $(CPP_FLAG) 2> $(basename $@).log
	$(DOS2UNIX) $(basename $@).log


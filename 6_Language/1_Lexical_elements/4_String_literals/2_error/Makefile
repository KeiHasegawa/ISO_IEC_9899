include ../../../../Makefile.error

test000.log : test000.c
	-$(DOG) $(CPP) -o $(basename $@).i $< $(CPP_FLAG) 2> $@
	$(DOS2UNIX) $@

test000.i : test000.c
	-$(DOG) $(CPP) -o $@ $< $(CPP_FLAG) 2> $(basename $@).log
	$(DOS2UNIX) $(basename $@).log

test001.log : test001.c
	-$(DOG) $(CC1) -o $(basename $@).i $< 2> $@
	$(DOS2UNIX) $@

test001.i : test001.c
	-$(DOG) $(CPP) -o $@ $< $(CPP_FLAG) 2> $(basename $@).log
	$(DOS2UNIX) $(basename $@).log

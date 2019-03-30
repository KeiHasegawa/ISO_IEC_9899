include ../../../../Makefile.error

test001.log : test001.c
	-$(CPP) -o $(basename $<).i $< $(CPP_FLAG) 2> $@
	$(DOS2UNIX) $@

test001.i : test001.c
	-$(CPP) -o $@ $< $(CPP_FLAG) 2> $(basename $@).log
	$(DOS2UNIX) $(basename $@).log

test002.log : test002.c
	-$(CPP) -o $(basename $<).i $< $(CPP_FLAG) 2> $@
	$(DOS2UNIX) $@

test002.i : test002.c
	-$(CPP) -o $@ $< $(CPP_FLAG) 2> $(basename $@).log
	$(DOS2UNIX) $(basename $@).log

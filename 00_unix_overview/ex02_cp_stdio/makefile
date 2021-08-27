#use this compiler:
CC=gcc
CC_OPTIONS=-v -Wall -W -D_GNU_SOURCE
CC_DEBUG_OPTIONS=-v -g --save-temps -Wall -W -D_GNU_SOURCE -W -DGETPROTOBYNUMBER

DMACROS=-DMAXLINE=1024

all:
	$(CC) $(CC_OPTIONS) $(DMACROS) main.c -o cp.run
#	$(CC) $(CC_OPTIONS) main.c ../../apue/lib/error.c -o ls.run

clean : 
	rm -f *.run *.i *.o *.s *.core
	git clean -f

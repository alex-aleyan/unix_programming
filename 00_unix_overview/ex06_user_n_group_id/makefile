#use this compiler:
CC=gcc
CC_OPTIONS=-v -Wall -W -D_GNU_SOURCE
CC_DEBUG_OPTIONS=-v -g --save-temps -Wall -W -D_GNU_SOURCE -W -DGETPROTOBYNUMBER

DMACROS=-DMAXLINE=1024

#	$(CC) $(CC_OPTIONS) main.c ../../apue/lib/error.c -o ls.run

all:
	$(CC) $(CC_OPTIONS) main.c -o id.run

clean : 
	rm -f *.run *.i *.o *.s *.core
	git clean -f

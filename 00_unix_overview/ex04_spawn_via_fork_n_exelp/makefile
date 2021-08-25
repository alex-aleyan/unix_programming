#use this compiler:
CC=gcc
CC_OPTIONS=-v -Wall -W -D_GNU_SOURCE
CC_DEBUG_OPTIONS=-v -g --save-temps -Wall -W -D_GNU_SOURCE -W -DGETPROTOBYNUMBER

#	$(CC) $(CC_OPTIONS) main.c ../../apue/lib/error.c -o ls.run


all:
	$(CC) $(CC_OPTIONS) -DMAXLINE=1024 main.c -o spawn.run

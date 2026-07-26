#use this compiler:
INC_DIR1   := ../../../common/c_cpp/c/include
INC_DIR2   := ./include

CC=gcc
CC_OPTIONS=-v -Wall -W -D_GNU_SOURCE -I$(INC_DIR1) -I$(INC_DIR2) -O2
CC_DEBUG_OPTIONS=-v -g --save-temps -Wall -W -D_GNU_SOURCE -W -DGETPROTOBYNUMBER

# DEPS = \
#     ls_run.h



# ---- build targets ---------------------------------------------------------
$(BIN): $(OBJS)
	$(CC) $^ -o $@ $(LDLIBS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@



#	$(CC) $(CC_OPTIONS) main.c ../../apue/lib/error.c -o ls.run

all:
	$(CC) $(CC_OPTIONS) main.c $(DEPS) -o ls.run
clean:
	rm ls.run

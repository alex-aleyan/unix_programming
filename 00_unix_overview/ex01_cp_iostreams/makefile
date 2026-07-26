# #use this compiler:
# CC=gcc
# CC_OPTIONS=-v -Wall -W -D_GNU_SOURCE
# CC_DEBUG_OPTIONS=-v -g --save-temps -Wall -W -D_GNU_SOURCE -W -DGETPROTOBYNUMBER

# DMACROS=-DMAXLINE=1024

# all:
# 	$(CC) $(CC_OPTIONS) $(DMACROS) main.c -o cp.run
# #	$(CC) $(CC_OPTIONS) main.c ../../apue/lib/error.c -o ls.run


BIN := cp-run

#use this compiler:

# INC_DIR1   := ../../../common/c_cpp/c/include
# INC_DIR2   := ./include

SRC_DIR1   := ./
SRCS1 := $(wildcard $(SRC_DIR1)/*.c)
OBJS1 := $(SRCS1:.c=.o)

SRC_DIR2   := ../../apue/lib/error.c
SRCS2 := $(wildcard $(SRC_DIR2)/*.c)
OBJS2 := $(SRCS2:.c=.o)

CC=gcc
CC_FLAGS=-v -Wall -W -D_GNU_SOURCE -I$(INC_DIR1) -I$(INC_DIR2) -O2
CC_DEBUG_OPTIONS=-v -g --save-temps -Wall -W -D_GNU_SOURCE -W -DGETPROTOBYNUMBER

LDLIBS :=

# **********************
# *** BUILD TARGETS: ***
# **********************

help:
	@echo "run \"make $(BIN)\" to build"

$(BIN): $(OBJS1) $(OBJS2)
	$(CC) $(CC_FLAGS) $^ -o $@ $(LDLIBS)

%.o: %.c
	$(CC) $(CC_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS1) $(BIN)

BIN := ls-run

#use this compiler:

INC_DIR1   := ../../../common/c_cpp/c/include
INC_DIR2   := ./include

SRC_DIR1   := ./
SRCS1 := $(wildcard $(SRC_DIR1)/*.c)
OBJS1 := $(SRCS1:.c=.o)

CC=gcc
CC_FLAGS=-v -Wall -W -D_GNU_SOURCE -I$(INC_DIR1) -I$(INC_DIR2) -O2
CC_DEBUG_OPTIONS=-v -g --save-temps -Wall -W -D_GNU_SOURCE -W -DGETPROTOBYNUMBER

LDLIBS :=

# **********************
# *** BUILD TARGETS: ***
# **********************

help:
	@echo "run \"make ls-run\" to build"

$(BIN): $(OBJS1)
	$(CC) $(CC_FLAGS) $^ -o $@ $(LDLIBS)

%.o: %.c
	$(CC) $(CC_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS1) $(BIN)

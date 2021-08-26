// System:
#include <stdio.h>
#include <errno.h>
//    # bits/errno.h
//    # linux/errno.h
//    # asm/errno.h
//    # asm-generic/errno-base.h
//    # asm-generic/errno.h
#include <unistd.h>
//#include <stdlib.h>
//#include <string.h>
//#include <time.h>
//#include <sys/types.h>
#include <sys/wait.h>

// Mine:
#include "../../../common/c_cpp/c/include/func.h"

// Book's:
//#include "../../apue/include/apue.h"
#include <dirent.h> // provides dir manipulation funcs and data types.

int i = 0;

int main(int argc, char *argv[])
{
    for (i = 0; i < 100; ++i)
        fprintf(stderr, "strerror(%d): %s\n", i,strerror(i));

    fprintf(stderr, "EACCES: %s\n", strerror(EACCES));
    errno = ENOENT;
    perror(argv[0]);
    exit(0);

}

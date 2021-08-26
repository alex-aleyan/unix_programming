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

//int i = 0;
//    for (i = 0; i < 100; ++i)

int main(void)
{
    printf("uid = %d, gid = %d\n", getuid(), getgid());
    exit(0);
}

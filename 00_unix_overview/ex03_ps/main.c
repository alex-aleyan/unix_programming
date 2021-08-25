// System:
#include <stdio.h>
#include <errno.h>
#include <unistd.h>
//#include <stdlib.h>
//#include <string.h>
//#include <time.h>
//#include <sys/types.h>

// Mine:
#include "../../../common/c_cpp/c/include/func.h"

// Book's:
//#include "../../apue/include/apue.h"
#include <dirent.h> // provides dir manipulation funcs and data types.


int main(void)
{
    printf("hello world from process ID %ld\n", (long)getpid());
    exit(0);
}


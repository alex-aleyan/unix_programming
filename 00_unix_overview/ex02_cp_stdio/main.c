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

#ifndef BUFFSIZE
    #define BUFFSIZE 4096
#endif

int main(void)
{
    int c;

    printf("BUFFSIZE=%d\n", BUFFSIZE);
    
    while ((c = getc(stdin)) != EOF)
    
    if (putc(c, stdout) == EOF) {
        bailverbose("stdout", __FILE__, __LINE__);
        //err_sys("output error");
        fputs(strerror(errno), stderr);
    }
    
    if (ferror(stdin)) {
        bailverbose("STDOUT_FILENO", __FILE__, __LINE__);
        //err_sys("input error");
        fputs(strerror(errno), stderr);
    }
    
    exit(0);
}




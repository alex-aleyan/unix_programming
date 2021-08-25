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
    int n;
    char buf[BUFFSIZE];

    printf("BUFFSIZE=%d\n", BUFFSIZE);

    while ((n = read(STDIN_FILENO, buf, BUFFSIZE)) > 0)
    
    if (write(STDOUT_FILENO, buf, n) != n)
        bailverbose("STDOUT_FILENO", __FILE__, __LINE__);
        //err_sys("write error");
        
    if (n < 0)
        bailverbose("STDOUT_FILENO", __FILE__, __LINE__);
        //err_sys("read error");
        
    exit(0);
}

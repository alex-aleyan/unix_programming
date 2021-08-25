#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <time.h>
#include <sys/types.h>

//#include "../../apue/include/apue.h"
#include "../../../common/c_cpp/c/include/func.h"
#include <dirent.h>


int main(int argc, char *argv[])
{
    DIR *dp;
    struct dirent *dirp;
    
    if (argc != 2)
        bail("0: bailing at main() on line __LINE__");
        //err_quit("usage: ls directory_name");
    
    if ((dp = opendir(argv[1])) == NULL)
        bail("1: bailing at main() on line __LINE__");
        //err_sys("can’t open %s", argv[1]);
    
    while ((dirp = readdir(dp)) != NULL)
        printf("%s\n", dirp->d_name);
    
    closedir(dp);
    
    exit(0);
}

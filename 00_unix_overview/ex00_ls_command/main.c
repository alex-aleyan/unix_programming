#include <stdio.h>

#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <time.h>
#include <sys/types.h>

//#include "../../apue/include/apue.h"
#include "../../../common/c_cpp/c/include/func.h"
#include <dirent.h> // provides dir manipulation funcs and data types.


int main(int argc, char *argv[])
{
    DIR *dp; // comes from dirent.h line 128
    struct dirent *dirp; // comes from dirent.h->bits/dirent.h
    
    if (argc != 2) {
        //printf("File %s(%d)\n", __FILE__, __LINE__);
        bailverbose("must pass exactly 1 argument", __FILE__, __LINE__);
        //err_quit("usage: ls directory_name");
    }
    
    if ((dp = opendir(argv[1])) == NULL) { // opendir comes from dirent.h
        //printf("File %s(%d)\n", __FILE__, __LINE__);
        bailverbose("failed to open dir", __FILE__, __LINE__);
        //bail("1: bailing at main() on line __LINE__");
    }

        //err_sys("can’t open %s", argv[1]);
    
    while ((dirp = readdir(dp)) != NULL) // readdir comes from dirent.h
        printf("%s\n", dirp->d_name);
    
    closedir(dp);
    
    exit(0);
}

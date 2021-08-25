// System:
#include <stdio.h>
#include <errno.h>
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



int main(void)
{
    char buf[MAXLINE]; /* from apue.h */
    pid_t pid;
    int status;
    printf("%% "); /* print prompt (printf requires %% to print %) */
    
    while (fgets(buf, MAXLINE, stdin) != NULL) {
    
        if (buf[strlen(buf) - 1] == '\n')
        buf[strlen(buf) - 1] = 0; /* replace newline with null */
        
        /* Use fork + exec to spawn a child process */
        if ((pid = fork()) < 0) {
            //err_sys("fork error");
        } else if (pid == 0) { /* child */
            execlp(buf, buf, (char *) 0);
            //err_ret("couldn’t execute: %s", buf);
            exit(127);
        }
        
        /* parent */
        if ((pid = waitpid(pid, &status, 0)) < 0) // wait on the child process to finish
        //err_sys("waitpid error");
        printf("%% ");
    }
    exit(0);
}

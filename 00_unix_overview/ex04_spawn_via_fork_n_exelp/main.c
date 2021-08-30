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
    
    printf("Parent's PID from within the parent process: %d\n", (long)getpid());

    while (fgets(buf, MAXLINE, stdin) != NULL) {
        
        /*
         * Because each line returned by fgets is terminated with a newline character,
         * followed by a null byte, we use the standard C function strlen to calculate the
         * length of the string, and then replace the newline with a null byte. We do this
         * because the execlp function wants a null-terminated argument, not a
         * newline-terminated argument.
         */
        if (buf[strlen(buf) - 1] == '\n')
        buf[strlen(buf) - 1] = 0; /* replace newline with null */
        

        /* Use fork + exec to spawn a child process (a copy of the caller).
         * - >0: fork returns process ID of a child which is >0 thus indicating to a parent 
         *   that this process is a parent.
         * - =0: fork returns 0 to a child process thus indicating that this process is a child.
         * - <0: fork returns a value <0 to indicate that an error occured.
         * - Because fork creates a new process, it is called once by the parent, but returns twice in 
         *   the parent and in the child.  */
        if ((pid = fork()) < 0) {
            //err_sys("fork error");
            fputs(strerror(errno), stderr);
        } else if (pid == 0) { /* child */
            // calling fork() followed by execlp() is called spawning a process.
            // run execlp to execute a command that was read as a string from STDIN stream.
            execlp(buf, buf, (char *) 0);
            //err_ret("couldn’t execute: %s", buf);
            // Here we hard type the return value of the child. Perhaps returning its own PID would make more sense?
            printf("Child's PID from within the child process: %d\n", pid);
            exit(127);
        } else { /* parent */
            printf("Child's PID from within the parent process: %d\n", pid);
        }
 
       
        /* parent
         * waitpid returns the termination status of the child
         *     - if <0, error occured.
         */
        if ((pid = waitpid(pid, &status, 0)) < 0) { // wait on the child process to finish
            //err_sys("waitpid error");
            fputs(strerror(errno), stderr);
        }
        printf("PID: %d\n", pid);
        printf("%% ");
    }
    exit(0);
}

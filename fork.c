#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    pid_t pid = fork();  // create a child process

    if (pid < 0) {
        // fork failed
        printf("Fork failed\n");
    } else if (pid == 0) {
        // This is the child process
        printf("I am the child process, pid = %d\n", getpid());
    } else {
        // This is the parent process
        printf("I am the parent process, pid = %d, child pid = %d\n", getpid(), pid);
    }

    return 0;
}


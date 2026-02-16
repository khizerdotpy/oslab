
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork(); // create a child process

    if (pid < 0) {
        perror("Fork failed");
        return 1;
    }
    else if (pid == 0) {
        // Child process prints letters
        for (char c = 'A'; c <= 'E'; c++) {
            printf("Child: %c, pid=%d, ppid=%d\n", c, getpid(), getppid());
            sleep(1); // slow down to see output clearly
        }
    }
    else {
        // Parent process prints numbers
        for (int i = 1; i <= 5; i++) {
            printf("Parent: %d, pid=%d, ppid=%d\n", i, getpid(), getppid());
            sleep(1); // slow down to see output clearly
        }
        wait(NULL); // wait for child to finish
    }

    return 0;
}

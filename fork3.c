#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();

    if (pid < 0) {
        perror("Fork failed");
        return 1;
    }
    else if (pid == 0) {
        // Child process: run ls -l using execlp
        printf("Child: running 'ls -l', pid=%d, ppid=%d\n", getpid(), getppid());
        execlp("grep", "grep", "hating", "targetfile.txt", NULL);
        //execlp("ls", "ls", "-l", NULL); // replaces child process with ls
        // If execlp fails:
        perror("execlp failed");
    }
    else {
        // Parent process
        wait(NULL); // wait for child to finish
        printf("Parent: child finished, pid=%d\n", getpid());
    }

    return 0;
}


//jo curtrent process chal rha he, uski execution change kardeta hai. command run karke change kardega apparently

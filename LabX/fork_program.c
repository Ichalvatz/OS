#include <stdio.h>
#include <unistd.h>

int main() {
    for (int i = 0; i < 3; i++) {
        pid_t PID = fork();
        if (PID == 0) {
            // Child process
            printf("Child process PID: %d\n", getpid());
            return 0;
        } else {
            // Parent process
            printf("Parent process PID: %d\n", getpid());
        }
    }
    return 0;
}

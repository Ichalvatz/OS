#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void signal_handler(int signal) {
    printf("Child received the signal %d\n", signal);
}

int main() {
    pid_t pid = fork();

    if (pid == 0) { // Child process
        signal(SIGUSR1, signal_handler);
        pause(); // Wait for signal
    } else { // Parent process
        sleep(1);
        kill(pid, SIGUSR1);
    }

    return 0;
}

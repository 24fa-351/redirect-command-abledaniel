#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/wait.h>

void redirect_streams(const char *input_file, const char *command, const char *output_file) {
    int input_fd;
    if (strcmp(input_file, "-") == 0) {
        input_fd = STDIN_FILENO;
    } else {
        input_fd = open(input_file, O_RDONLY);
    }

    int output_fd;
    if (strcmp(output_file, "-") == 0) {
        output_fd = STDOUT_FILENO;
    } else {
        output_fd = open(output_file, O_WRONLY | O_CREAT | O_TRUNC);
    }

    pid_t pid = fork();
}
int main(int argc, char *argv[]) {
    if (argc != 4) {
        return 1;
    }

    redirect_streams(argv[1], argv[2], argv[3]);
    return 0;
}

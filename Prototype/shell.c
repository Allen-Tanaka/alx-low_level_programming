#include "shell.h"

/**
 * str_len - Custom function to calculate the length of a string.
 * @str: The string.
 *
 * Return: The length of the string.
 */
size_t str_len(const char *str)
{
    size_t len = 0;

    while (str[len])
        len++;

    return len;
}

/**
 * execute_command - Executes a command provided by the user.
 * @cmd: Command to execute.
 */
void execute_command(char *cmd)
{
    pid_t pid;
    int status, arg_count = 0;
    char *args[MAX_INPUT_SIZE / 2], *token;

    if (cmd[str_len(cmd) - 1] == '\n')
        cmd[str_len(cmd) - 1] = '\0';

    token = strtok(cmd, " ");
    while (token)
    {
        args[arg_count++] = token;
        token = strtok(NULL, " ");
    }
    args[arg_count] = NULL;

    if (handle_exit(args))
        return;

    pid = fork();
    if (pid == 0)
    {
        if (execve(cmd, args, NULL) == -1)
        {
            perror("Failed to execute command");
            exit(1);
        }
    }
    else if (pid < 0)
    {
        perror("Failed to fork");
    }
    else
    {
        waitpid(pid, &status, 0);
    }
}

/**
 * main - A simple shell that executes commands from the user.
 *
 * Return: Always 0.
 */
int main(void)
{
    char input[MAX_INPUT_SIZE];
    ssize_t bytes_read;

    while (1)
    {
        write(STDOUT_FILENO, "$ ", 2);
        bytes_read = read(STDIN_FILENO, input, sizeof(input) - 1);

        if (bytes_read <= 0)
        {
            write(STDOUT_FILENO, "\n", 1);
            exit(0);
        }

        input[bytes_read] = '\0';
        execute_command(input);
    }

    return (0);
}


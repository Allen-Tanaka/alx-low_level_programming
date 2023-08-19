#include "shell.h"

/**
 * execute_command - executes a cmd by user.
 * @cmd: Command to exec.
 *
 * Return: 0.
 */

void execute_command(char *cmd)
{
	size_t len = strlen(cmd);
	pid_t pid;
	int status, arg_count = 0;
	char *args[MAX_INPUT_SIZE / 2], *token = strtok(cmd, " ");

	/* remove new line character */
	if (len > 0 && cmd[len - 1] == '\n')
	{
		cmd[len - 1] = '\0';
	}

	/*Tokenize input to split command and its args*/
	while (token != NULL)
	{
		args[arg_count++] = token;
		token = strtok(NULL, " ");
	}
	args[arg_count] = NULL;

	/* fork child process */
	pid = fork();

	if (pid < 0)
	{
		perror("Failed to fork");
		return;
	}

	if (pid == 0)
	{
		if (execlp(cmd, cmd, NULL) == -1)
		{
			perror("Failed to execute command");
			exit(1);
		}
	}
	else /* Parent process */
	{
		waitpid(pid, &status, 0); /* wait for child to finish */
	}
}

/**
 * main - simple shell executing commands from user.
 *
 * Return: Always 0.
 */

int main(void)
{
	char input[MAX_INPUT_SIZE];

	while (1)
	{
		printf("$ ");

		/* Get user input */
		if (fgets(input, sizeof(input), stdin) == NULL)
		{
			printf("\n");
			exit(0);
		}

		execute_command(input);
	}

	return (0);
}

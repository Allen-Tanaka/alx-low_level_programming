#include "shell.h"

/**
 * main function - shell main loop
 * execute_command - executes a cmd by user.
 * @cmd: Command to exec.
 *
 * Return: 0.
 */

void execute_command(char *cmd)
{
	size_t len = strlen(cmd);

	/* remove new line character */
	if (len > 0 && cmd[len - 1] == '\n')
	{
		cmd[len - 1] = '\0';
	}

	/* fork child process */
	pid_t pid = fork();

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
		int status;

		waitpid(pid, &status, 0); /* wait for child to finish */
	}
}

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

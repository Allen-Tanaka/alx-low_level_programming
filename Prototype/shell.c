#includie "shell.h"

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
	char *cmd_path = find_cmd_path(args[0]);

	/* remove new line character */
	if (len > 0 && cmd[len - 1] == '\n')
	{
		cmd[len - 1] = '\0';
	}

	/*Tokenize input to split command and its args*/
	while (token)
	{
		args[arg_count++] = token;
		token = strtok(NULL, " ");
	}
	args[arg_count] = NULL;
	if (!cmd_path)
	{
		write (STDERR_FILENO, " Command not found: ", 18);
		write (STDERR_FILENO, args[0], _strlen(args[0]));
		write (STDERR_FILENO, "\n", 1);
		return;
	}

	/* fork child process */
	pid = fork();
	if (pid < 0)
	{
		perror("Failed to fork");
		free(cmd_path);
		return;
	}
	if (pid == 0)
	{
		if (execve(cmd_path, args, NULL) == -1)
		{
			perror("Failed to execute command");
			free(cmd_path);
			exit(1);
		}
	}
	else /* Parent process */
	{
		waitpid(pid, &status, 0);/* wait for child to finish */
	}
	free(cmd_path);
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
		write(STDOUT_FILENO, "$ ", 2);

		/* Get user input */
		if (getline(&input, &MAX_INPUT_SIZE, stdin) == -1)
		{
			write(STDOUT_FILENO, "\n", 1);
			exit(0);
		}

		execute_command(input);
	}

	return (0);
}

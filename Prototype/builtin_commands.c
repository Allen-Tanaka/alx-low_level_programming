#include "shell.h"

/**
 * is_exit_command - function that checks if the command is "exit"
 * @str: string
 *
 * Return: 1(if it is 'exit'), 0 otherwise
 */
int is_exit_command(const char *str)
{
	const char *exit_cmd = "exit";

	while (*str && *exit_cmd)
	{
		if (*str++ != *exit_cmd++)
			return (0);
	}
	return (!(*str) && !(*exit_cmd));
}

/**
 * handle_exit - function that handles the 'exit' built-in command.
 * @args: Arguements
 *
 * Return: 1(if it is 'exit'), 0 otherwise.
 */
int handle_exit(char **args)
{
	if (args[0] && is_exit_command(args[0]))
	{
		free(args[0]);
		exit(0);
	}
	return (0);
}

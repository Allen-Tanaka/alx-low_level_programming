#ifndef SHELL_H
#define SHELL_H


/* LIBRARIES */
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <string.h>

#define MAX_INPUT_SIZE 1024

/* PROTOTYPES */
void execute_command(char *cmd);
void print_env(char **env);
int handle_exit(char **args);
int is_exit_command(const char *str);
char *find_path(const char *cmd);
void free_path(char **path);
size_t str_len(const char *str);
int str_cmp(const char *s1, const char *s2);

extern char **environ;

#endif

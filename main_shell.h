#ifndef main_shell
#define main_shell
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
extern char **environ;
void display(void);
void printer(const char *toPrint);
size_t read_input(char *command);
void execution(const char *command);
size_t readLine(int fd, char *command, size_t cmdsize);
char *my_strtok(char *cmd, const char *delim);
char my_env(void);
void _pid(char *command_d, char *f_path, char **args, char **envp);
#endif

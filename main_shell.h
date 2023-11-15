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
void display(void);
void printer(const char *toPrint);
size_t read_input(char *command);
void execution(const char *command);
size_t readLine(int fd, char *command, size_t cmdsize);
char *my_strtok(char *cmd, const char *delim);
#endif

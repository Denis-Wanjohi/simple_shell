#ifndef main_shell
#define main_shell
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>
void display(void);
void printer(const char *toPrint);
void read_input(char *command,size_t size);
void execution(const char *command);
#endif

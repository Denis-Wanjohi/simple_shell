#include "main_shell.h"
/**
 * main - executes the program
 * Return:0 when success
 */
int main()
{
char command[1024];
command[0] ='\0';
while (1)
{
    display();
    read_input(command);
    execution(command);
}
return 0;
}

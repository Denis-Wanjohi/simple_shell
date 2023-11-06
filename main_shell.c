#include "main_shell.h"
/**
 * main - executes the program
 * Return:0 when success
 */
int main()
{
char command[200];
while (1)
{
    display();
    read_input(command,sizeof(command));
    execution(command);
}
return 0;
}

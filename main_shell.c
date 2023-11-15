#include "main_shell.h"
/**
 * main - executes the program
 * Return:0 when success
 */
int main(void)
{
char command[1024];
command[0] = '\0';
while (1)
{
display();
if (fgets(command, sizeof(command), stdin) == NULL)
{
if (feof(stdin))
{
printf("\nEnd of File condition (Ctrl+D) detected. Exiting...\n");
break;
}
else
{
perror("Error reading input");
exit(EXIT_FAILURE);
}
}
execution(command);
}
return (0);
}

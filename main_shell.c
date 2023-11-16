#include "main_shell.h"
/**
 * main - executes the program
 * Return:0 when success
 */
int main(void)
{
char command[1024];
size_t length;
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
length = strlen(command);
if (length > 0 && command[length - 1] == '\n')
{
command[length - 1] = '\0';
}
exe(command);
}
return (0);
}

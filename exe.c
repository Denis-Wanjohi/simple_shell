#include "main_shell.h"
/**
 * exec()-execution
 * @command:to be executed
 */
void exe(char *command)
{
if (strlen(command) > 0)
{
if (access(command, X_OK) == 0)
{
printf("Executing command: %s\n", command);
}
else
{
printf("Command '%s' not found. Please enter a valid command.\n", command);
}
}
}

#include "main_shell.h"
/**
 * execution - executes thr commands
 * @command : the command to executes
*/
void execution(const char *command)
{
char *command_d;
int i = 0;
char *args[100];
char f_path[256];
char *token;
char *envp[] = { "PATH=/bin:/usr/bin", NULL };
if (command == NULL || *command == '\0')
{
return;
}
command_d = strdup(command);
token = my_strtok(command_d, " ");
if (strcmp(command_d, "exit") == 0)
{
exit(EXIT_SUCCESS);
}
else if (strcmp(command_d, "env") == 0)
{
my_env();
}
else
{
while (token != NULL)
{
args[i] = token;
token = my_strtok(NULL, " ");
i++;
}
args[i] = NULL;
f_path[0] = '\0';
snprintf(f_path, sizeof(f_path) - 1, "/bin/%s", args[0]);
if (access(f_path, X_OK) == -1)
{
printf("Command: %s not found\n", command_d);
return;
}
_pid(command_d, f_path, args, envp);
free(command_d);
}
}

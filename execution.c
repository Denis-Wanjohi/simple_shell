#include "main_shell.h"
/**
 * execution - executes thr commands
 * @command : the command to executes
*/
void execution(const char *command)
{
pid_t pid;
char *command_d;
int i = 0
char *args[100];
char f_path[256];
char *token;
extern char **environ;
char **envt = environ;
char *const envp[] = { "PATH=/bin:/usr/bin", NULL };
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
while (*envt != NULL)
{
printf("%s\n", *envt);
envt++;
}
return;
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
pid = fork();
if (pid < 0)
{
perror("Fork failed");
free(command_d);
exit(EXIT_FAILURE);
}
else if (pid == 0)
{
execve(f_path, args, envp);
perror("Exec failed");
free(command_d);
exit(EXIT_FAILURE);
}
else
{
int status;
if (waitpid (pid, &status, 0) == -1)
{
perror("Wait for child process failed");
free(command_d);
exit(EXIT_FAILURE);
}
}
free(command_d);
}
}

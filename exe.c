#include "main_shell.h"
/**
 * exec()-execution
 * @command:to be executed
 */
void exe(char *command)
{
pid_t pid = fork();
if (pid < 0)
{
perror("Fork failed");
exit(EXIT_FAILURE);
}
else if (pid == 0)
{
char *args[] = {"ls", NULL};
if (execve(command, args, NULL) == -1)
{
perror("Execution failed");
exit(EXIT_FAILURE);
}
}
else
{
wait(NULL);
}
}

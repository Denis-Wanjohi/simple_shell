#include "main_shell.h"
/**
 * _pid()-process
 * @command_d:command
 * @f_path:path
 * @args:arguments
 * @envp:env path
 */
void  _pid(char *command_d, char *f_path, char **args, char **envp)
{
pid_t pid = fork();
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
if (waitpid(pid, &status, 0) == -1)
{
perror("Wait for child process failed");
free(command_d);
exit(EXIT_FAILURE);
}
}
}

#include "main_shell.h"
/**
* my_env-env
* Return:when done
*/
char my_env(void)
{
extern char **environ;
char **envt = environ;
while (*envt != NULL)
{
printf("%s\n", *envt);
envt++;
}
return (0);
}

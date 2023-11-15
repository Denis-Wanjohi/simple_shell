#include "main_shell.h"

/**
 * my_strtok (char *cmd, const char *delim)-tokenizer
 * @cmd:to be tokenized
 * @delim:delimitor
 * Return:the tokenized
 */

char *my_strtok (char *cmd, const char *delim)
{
  static char *lastTk = NULL;
  char *token;
  if (cmd != NULL)
    {
      lastTk = cmd;
    }
  else if (lastTk == NULL)
    {
      return NULL;
    }
  while (*lastTk != '\0' && strchr (delim, *lastTk) != NULL)
    {
      lastTk++;
    }
  if (*lastTk == '\0')
    {
      lastTk = NULL;
      return NULL;
    }
  token = lastTk;
  while (*lastTk != '\0' && strchr (delim, *lastTk) == NULL)
    {
      lastTk++;
    }
  if (*lastTk != '\0')
    {
      *lastTk = '\0';
      lastTk++;
    }
  return token;
}


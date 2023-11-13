#include "main_shell.h"  
/**
 * readLine() - reads the lines
 * @fd:file descriptor STDIN
 * @command:command we are reading 
 * @cmdsize:size
 * Return: the bytes read
 */
size_t readLine(int fd,char *command,size_t cmdsize)
{
return(read(fd,command,cmdsize));
}

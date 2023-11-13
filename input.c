#include "main_shell.h"
/**
 * read_input- reads the input
*/
size_t read_input(char *command)
{
	size_t btsRd;
	if(command == NULL ){

		return (0);
	}
 	btsRd = readLine(0,command,sizeof(command));
    command[strcspn(command, "\n")] = '\0';
	return (btsRd);
}

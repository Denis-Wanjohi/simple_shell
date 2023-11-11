#include "main_shell.h"
/**
 * read_input- reads the input
*/
void read_input(char *command,size_t size){
    if(fgets(command,size,stdin) == NULL){
        if (feof(stdin)){
            printer("\n");
            exit(EXIT_SUCCESS);
        }else{
            printer("error reding ....");
            exit(EXIT_FAILURE);
        }
    }
    command[strcspn(command,"\n")] = '\0';
}

#include "main_shell.h"
/**
 * printer()-acts as the print function
 * @toPrint : content to be printed
*/
void printer(const char *toPrint)
{
write(STDOUT_FILENO, toPrint, strlen(toPrint));
}

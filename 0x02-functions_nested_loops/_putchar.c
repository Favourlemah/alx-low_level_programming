#include "main.h"
#include <unistd.h>

/**
 * _putchar - writed the character c to stdout
 * @c: the character to print
 *
 * return: on success 1
 */
int putchar(char c)
 {
	 return(write(1, &c, 1));
 }

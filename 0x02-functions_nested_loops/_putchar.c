#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - writed the character c to stdout
 * @c: the character to print
 *
 * return: on success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

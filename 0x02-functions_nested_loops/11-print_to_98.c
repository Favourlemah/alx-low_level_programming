#include "main.h"

/**
 *print_to_98 - prints all natural numbers from n to 98
 *@n: input number
 *Return: no return value
 */

void print_to_98(int *n)
{
	if (n > 98)
	{

		for (; n > 98; n--)
		{
			printf("%i, ", n);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%i, ", n);
		}
	}
	printf("%i\n", n);
}


/**
 *
 *  * main - check the code
 *
 *   *
 *
 *    * Return: Always 0.
 *
 *     */

int main(void)

{

    print_to_98(0);

    print_to_98(98);

    print_to_98(111);

    print_to_98(81);

    print_to_98(-10);

    return (0);

}

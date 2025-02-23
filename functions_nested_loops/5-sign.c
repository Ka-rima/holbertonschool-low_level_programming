#include "main.h"

/**
 * int print_sign - the function prints the sign of a number
 *
 * @n: the variable we need to check
 *
 * Return: 1 and prints + if n is greater than zero, 0 and prints 0 if n is zero, -1 and prints - if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_puthchar(+)
		return (1)
	}

	if (n == 0)
	{
		_putchar(0)
		return (0)
	}
	if (n < 0)
	{
		_putchar(-)
		return (-1)
	}
}


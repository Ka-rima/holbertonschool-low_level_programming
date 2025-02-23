#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 *
 * @r : is a global variable
 *
 * Return: the value of the last digit
 */

int print_last_digit(int r)
{
	int k;

	k = r % 10;

	if (k < 0)
	
	_putchar(k + '0');
	
	return (k);
}


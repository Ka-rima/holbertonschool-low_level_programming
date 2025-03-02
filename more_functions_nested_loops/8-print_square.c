#include "main.h"

/**
 * print_square - function that prints a square
 *
 * @size: integer
 *
 */

void print_square(int size)
{
	int i;
	int k;

	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (i = 0; i < size; i++) /** horizontal */
		{
			for (k = 0; k < size; k++) /** vertical */

		{
			_putchar('#');
		}
			_putchar('\n');
		}
	}
}


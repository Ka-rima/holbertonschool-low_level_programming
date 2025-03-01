#include "main.h"

/**
 * print_diagonal -  function that draws a diagonal line
 *
 * @n : integer
 *
 */

void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = '0'; i < n; i++)
		{
			_putchar('\\');
		}
			_putchar('\n');
	}
}


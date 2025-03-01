#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 *
 * @n : integer
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		if (n >= 0)
		{
			_putchar('_');
			n++;
		}
			_putchar('\n');
		}
}


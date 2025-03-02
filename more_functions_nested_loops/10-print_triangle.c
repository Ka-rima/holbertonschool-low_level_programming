#include "main.h"

/**
 * print_triangle - function that prints a triangle
 *
 * @size: siz of the triangle
 */

void print_triangle(int size)
{
	int i;
	int k;
	int n;

	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	for (i = 0; i < size; i++)
	{
		for (k = 0; k <= i; k++)
		{
		_putchar('#');
		}
		for (n = 0; n < size; n--)
		{
			_putchar(' ');
		}
	_putchar('\n');
	}
}


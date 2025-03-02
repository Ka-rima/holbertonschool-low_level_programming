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

	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	for (i = 0; i < size; i++)
	{
	for (k = 0; k < size; k--)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
}


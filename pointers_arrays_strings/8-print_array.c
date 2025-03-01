#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers
 *
 * @a: array
 *
 * @n: is the number of elements of the array to be printed
 *
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d\n", a[i]);
	}
	if (n != '0')
		printf(", ");
}


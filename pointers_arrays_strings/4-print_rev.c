#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 *
 * @s: variable
 *
 */

void print_rev(char *s)
{
	int start = 0;
	int end = 0;
	char temp;

	while (start < end)
	{
		temp = start;
		start = end;
		end = temp;
		start++;
		end--;
	}
	_putchar(*s);
	_putchar('\n');

}

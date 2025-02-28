#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 *
 * @s: variable
 *
 */

void print_rev(char *s)
{
	int len;

	len = 0;

	while (s[len] != '\0')
		len++;

	while (s[len] >= 0)
		_putchar(s[len]);
		len--;

	_putchar('\n');

}

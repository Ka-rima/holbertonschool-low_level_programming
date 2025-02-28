#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 *
 * @s: variable
 *
 */

void print_rev(char *s)
{
	while (*s != '\0')

	_putchar(*s);
	s--;
	_putchar('\n');

}

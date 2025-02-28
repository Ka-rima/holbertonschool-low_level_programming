#include "main.h"

/**
 * puts_half - function that prints half of a string
 *
 * @str: variable
 *
 */

void puts_half(char *str)
{
	int n;

	n = 5;

	for (n = 5; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
		_putchar('\n');
}

#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * starting with the first character
 *
 * @str: variable
 *
 */

void puts2(char *str)
{
	int n;

	n = 0;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
		_putchar('\n');
}

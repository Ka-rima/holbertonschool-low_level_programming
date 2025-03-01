#include "main.h"

/**
 * puts_half - function that prints half of a string
 *
 * @str: variable
 *
 */

void puts_half(char *str)
{
	int len;
	int n;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	n = (len + 1) / 2;
	if (len % 2 == 0)
	{
		n++;
	}

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');

}

#include "main.h"

/**
 * puts_half - function that prints half of a string
 *
 * @str: variable
 *
 */

void puts_half(char *str)
{
	int n = 0;
	int half = n / 2;

	while (str[n] != '\0')
		n++;

	while (str[half] != '\0')
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');

}

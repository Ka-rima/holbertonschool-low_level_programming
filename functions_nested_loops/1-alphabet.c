#include "main.h"

/**
 * print_alphabet - print lowercase alphabet followed by a new line
 *
 * Return: 0 (success)
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
		_putchar('\n');
}


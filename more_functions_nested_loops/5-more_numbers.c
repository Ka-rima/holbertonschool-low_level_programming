#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 *
 */

void more_numbers(void)
{
	int times;
	int number;

	for (times = 0; times < 10; times++)
	{
		for (number = 0; number <= 14; number++)
		{
		if (number >= 10)
		{
			_putchar(number / 10 + '0');
		}
		_putchar(number % 10 + '0');
		}
			_putchar('\n');
	}
}

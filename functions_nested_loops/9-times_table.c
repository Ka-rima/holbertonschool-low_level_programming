#include "main.h"

/**
 * times_table - function that prints the 9 times tables
 */

void times_table(void)
{
	int i;
	int k;
	int m;

	for (i = 0; i <= 9; i++)
	{
		for (k = 0; k <= 9; k++)
		{
			m = i * k;

			if (k != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (m < 10)
			{
				_putchar(' ');

				if (m < 10)
				{
					_putchar(m + '0');

				}
			}
			else
			{
				_putchar(m / 10 + '0');
				_putchar(m % 10 + '0');
			}
		}

		_putchar('\n');
	}
}


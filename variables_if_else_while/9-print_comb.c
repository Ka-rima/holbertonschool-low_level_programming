#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: (0)
 */

int main(void)
{
	int k;

	for (k = 0; k <= 9; k++)
	{
		putchar(k + '0');


	if (k < 9)
{
	putchar(',');
	putchar(' ');
}
}
	putchar('\n');
	return (0);
}


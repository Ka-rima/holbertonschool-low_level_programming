#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: always 0 (Success)
*/

int main(void)
{
	/** declaration of variables */
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
	if (i == 'q' || i == 'e')
	{
		continue;
	}
		putchar(i);
	}

	putchar('\n');
	return (0);
}


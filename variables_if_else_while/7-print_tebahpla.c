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
	char i;

	for (i = 'z'; i <= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}


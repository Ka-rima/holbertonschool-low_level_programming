#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (Success)
 *
 */

int main(void)
{
	int k;

	for (k = 1; k <= 100; k++)
	{
		if (k % 3 == 0)
		{
			printf("Fizz");
		}
		if (k % 5 == 0)
		{
			printf("Buzz");
		}
		if (k % 3 == 0 && k % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", k);
		}
		printf("\n");
	}
		return (0);
}


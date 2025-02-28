#include "main.h"

/**
 * rev_string - function that reverses a string
 *
 * @s: variable
 *
 */

void rev_string(char *s)
{
	char temp;
	int start = 0;
	int end = 0;
	char str[10];

	while (s[end] != '\0')
	{
		end++;
	}

	while (start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;

		start++;
		end--;
	}
}

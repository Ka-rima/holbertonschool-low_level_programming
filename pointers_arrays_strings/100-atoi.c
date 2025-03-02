#include "main.h"

/**
 * atoi - function that convert a string to an integer
 * 
 * @s: character
 */

int _atoi(char *s)
{
	int i;

	while (s[i] == '-')
	{
		i++;
	}
	while(s[i] == '+')
	{
		i++;
	}
	while(s[i] != '\0')

		return(i);
}


#include "main.h"

/**
 * _strlen - function that returns the length of a string
 *
 * @s: function parameter that represents a pointer to a character
 *
 * Return: (string lenght)
 */

int _strlen(char *s)
{
	int len;

	len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

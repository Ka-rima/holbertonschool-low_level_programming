#include "main.h"

/**
 * _strncat - function that concatenates two strings
 *
 * @dest: point to first character of a string
 *
 * @src: point to the source
 *
 * @n: number maximum of characters
 *
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	while (*dest != '\0')
	{
		dest++;
	}
	if (*src != '\0' && n > 0)
	{
		src++;
		dest++;
		*dest = *src;

	}
		return (dest);
}

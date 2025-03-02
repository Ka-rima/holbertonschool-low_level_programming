#include "main.h"

/**
 * _strcat - function that concatenates two strings
 *
 * @dest: pointer to destination
 *
 * @src: pointer to source
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';

	return (dest);
}


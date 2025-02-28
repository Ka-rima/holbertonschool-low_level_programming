#include "main.h"

/**
 *  _puts - function that prints a string, followed by a new line
 *
 * @str: parameter of funtion puts
 *
 */

void _puts(char *str)
{

	while (*str != '\0') /** we stop at the end of the string */
	str++;

	_putchar(*str);
	_putchar('\0');
}

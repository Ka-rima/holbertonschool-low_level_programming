#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);  /** Function for _putchar */
void reset_to_98(int *n); /** function that takes a pointer to an int as parameter and updates the value it points to 98 */
void swap_int(int *a, int *b); /** function that swaps the values of two integers */
int _strlen(char *s); /** function that returns the length of a string */
void _puts(char *str); /** function that prints a string, followed by a new line, to stdout */
void print_rev(char *s); /** function that prints a string, in reverse, followed by a new line */
void rev_string(char *s); /** function that reverses a string */
void puts2(char *str); /** function that prints every other character of a string, starting with the first character */
void puts_half(char *str); /** function that prints half of a string */
void print_array(int *a, int n); /** function that prints n elements of an array of integers */
char *_strcpy(char *dest, char *src); /** function that copies the string pointed to by src
including the terminating null byte (\0), to the buffer pointed to by dest */
char *_strcat(char *dest, char *src); /**  function that concatenates two strings */
int _atoi(char *s); /**  function that convert a string to an integer */
char *_strncat(char *dest, char *src, int n); /** function that concatenates two strings */
char *_memset(char *s, char b, unsigned int n); /** function that fills memory with a constant byte */

#endif /* MAIN_H */


#include <stdio.h>

/**
*main - Entry main
*
*Return: Always 0
*/

int main(void)
{
	char charType;
	int intType;
	long longType;
	long long longlongType;
	float floatType;

	printf("Size of a char: 1 byte(s)\n", sizeof(charType));
	printf("Size of an int: 4 byte(s)\n", sizeof(intType));
	printf("Size of a long int: 4 byte(s)\n", sizeof(longintType));
	printf("Size of a long int: 8 byte(s)\n", sizeof(longintType));
	printf("Size of a long long int: 8 byte(s)\n", sizeof(longlongintType));
	printf("Size of a float: 4 byte(s)\n", sizeof(floatType));

	return (0);
}

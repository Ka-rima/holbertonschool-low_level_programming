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

	printf("Size of int: %zu bytes\n", sizeof(charType));
	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of int: %zu bytes\n", sizeof(longType));
	printf("Size of int: %zu bytes\n", sizeof(longlongType));
	printf("Size of int: %zu bytes\n", sizeof(floatType));

	return(0);
}

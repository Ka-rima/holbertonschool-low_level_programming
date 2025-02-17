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

	printf("Size of a char: \n%ld byte(s)", sizeof(char));
	printf("Size of an int: \n%ld byte(s)", sizeof(int));
	printf("Size of a long int:\n%ld byte(s)", sizeof(long int));
	printf("Size of a long long int: \n%ld byte(s)", sizeof(long long int));
	printf("Size of a float: \n%ld byte(s)", sizeof(float));

	return (0);
}

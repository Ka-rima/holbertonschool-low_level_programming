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

	printf("\n %ld bytes pour variable de type char ", sizeof(char));
	printf("\n %ld bytes pour variable de type int ", sizeof(int));
	printf("\n %ld bytes pour variable de type long", sizeof(long int));
	printf("\n %ld bytes pour variable de type long long", sizeof(long long int));
	printf("\n %ld bytes pour vartibale de type float", sizeof(float));

	return (0);
}

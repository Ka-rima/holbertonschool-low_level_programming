#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: always 0 (Success)
*/

int main(void)
{
/** declaration of a variable */
        int n;
	int k = n%10;
	
        srand(time(0));
        n = rand() - RAND_MAX / 2;

        if (k > 5)
        {
        printf("Last digit of %d is %d and greater than 5\n", n, k);
        }
        if (k == 0)
        {
        printf("Last digit of %d is %d and is zero\n", n, k);
        }
        if (k > 6)
        {
        printf("Last digit of%d is %d and is less than 6 and not 0\n", n, k);
        }
        return (0);
}


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - determines if num is +ve or -ve
 *
 * This function creates random numbers each time it is executed
 * and determines if +ve or -Ve.
 * Return: 0 always
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}

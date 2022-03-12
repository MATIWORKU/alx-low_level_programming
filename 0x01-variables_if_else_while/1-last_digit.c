#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - finds range of last digit
 *
 * This fun takes random numbers and determine the range of their last digit
 * Return:0 always
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last;

	if (n > 0)

		last = n % 10;
	else

		last = (-n) % 10;
	if (last > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	else if (last == 0)
		printf("Last digit of %d is %d and is 0\n", n, last);
	else if (last < 6 && last != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	return (0);
}

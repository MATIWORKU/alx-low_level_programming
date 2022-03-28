#include <stdio.h>
#include "main.h"

/**
 * print_last_digit- prints last digit of input
 * @n: number we are gonna print the last digit for
 *
 * Return: 0 always
 */
int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
	{
		n = -n;
	}
	_putchar(n + '0');
	return (n);
}

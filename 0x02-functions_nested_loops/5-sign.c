#include <stdio.h>
#include "main.h"

/**
 * print_sign- check if number is positive , negative or zero
 * @n: number to be checked
 *
 * Return: 1 if positive . 0 if zero . -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	else
	{
		return (0);
		_putchar('0');
	}
}

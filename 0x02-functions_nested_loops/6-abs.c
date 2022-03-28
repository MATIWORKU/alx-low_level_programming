#include <stdio.h>
#include "main.h"

/**
 * _abs- calculates absolute value for integer
 * @n: the interger we are gonna calculate absolute value for
 *
 * Return: The value of the integer
 */
int _abs(int n)
{
	if (n < 0)
		n = -(n);
	else
		n = n;
	return (n);
}

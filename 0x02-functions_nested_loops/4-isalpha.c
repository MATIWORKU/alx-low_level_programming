#include <stdio.h>
#include "main.h"

/**
 * _isalpha- checks to see c is an alphabet either lower or upper case
 * @c: number to be checked
 *
 * Return: 1 if alphabet , 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

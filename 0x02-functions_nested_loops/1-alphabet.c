#include <stdio.h>
#include "main.h"

/**
 * print_alphabet- uses putchar to print lowercase alphabets.
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
		_putchar(ch);
	_putchar('\n');
}

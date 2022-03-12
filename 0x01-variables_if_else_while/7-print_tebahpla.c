#include <stdio.h>

/**
 * main - lower case alphabets in reverse order
 *
 * This function prints lower case alphabets
 * Return: 0 always
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}

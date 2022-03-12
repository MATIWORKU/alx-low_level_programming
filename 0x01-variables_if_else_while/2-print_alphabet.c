#include <stdio.h>

/**
 * main - lower case alphabets
 *
 * This function prints lower case alphabets
 * Return: 0 always
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar("\n");
	return (0);
}

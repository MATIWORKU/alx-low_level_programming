#include <stdio.h>

/**
 * main - HexaDecimal numbers in lowercase
 *
 * This function prints numbers of base16 in lowercase
 * Return: 0 always
 */
int main(void)
{
	char ch;
	int n;

	for (n = 48; n < 58; n++)
		putchar(n);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}

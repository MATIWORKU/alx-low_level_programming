#include <stdio.h>

/**
 * main - lower case alphabets except q and e
 *
 * This function prints lower case alphabets
 * Return: 0 always
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' || ch != 'q')
			putchar(ch);
	}
	putchar('\n');
	return (0);
}

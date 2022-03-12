#include <stdio.h>

/**
 * main - lower and upper case alphabets
 *
 * This function prints voth the lower cases and upper cases of the alphabet
 * Return: 0 always
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}

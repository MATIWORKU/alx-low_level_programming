#include <stdio.h>

/**
 * main - print single digit number using putchar
 *
 * This function prints singlr digit numberd using putchar and
 * separating them using comma and space
 * Return: 0 always
 */
int main(void)
{
	int i;

	for (i = 48; i < 57; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar(57);
	return (0);
}

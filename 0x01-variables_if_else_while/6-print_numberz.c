#include <stdio.h>

/**
 * main - print single digit number using putchar
 *
 * This function prints singlr digit numberd uding putchar
 * Return: 0 always
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);
	putchar('\n');
	return (0);
}

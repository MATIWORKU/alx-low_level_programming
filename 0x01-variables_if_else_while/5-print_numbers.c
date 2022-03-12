#include <stdio.h>

/**
 * main - prints number 0-9
 *
 * This function prints numbers starting from 0 to 9
 * Return: 0 always
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}

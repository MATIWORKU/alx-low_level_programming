#include "main.h"

/**
 * times_table- creates a multiple table of 9
 *
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			_putchar((i * j));
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
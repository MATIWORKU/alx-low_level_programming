#include <stdio.h>
#include <unistd.h>

/**
 * main-prints statement using write
 *
 * This function prints a statement without using printf pr puts
 * Return: 0 always
 */
int main(void)
{
	write(2,"and that piece of art is useful\" - Dora korpar, 2015-10-19",59);
	return (1);
}

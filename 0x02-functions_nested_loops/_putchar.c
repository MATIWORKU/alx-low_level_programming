#include <unistd.h>

/**
 * _putchar- writes the charachter c to stdout
 * @c: The character to be printed
 *
 * Return: on success 1.
 * on error, -1 is returned, and error is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c , 1));
}

#include <unistd.h>

/**
 * _putchar - a function that writes a character c to stdout
 * @c: the character to be printed
 *
 * Return: void
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

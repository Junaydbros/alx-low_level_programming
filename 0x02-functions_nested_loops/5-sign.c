#include <stdio.h>
#include "main.h"

/**
 * print_sign - function that prints the sign of a number
 * @n: the number to be checked for sign confirmation
 *
 * Return: 1 if 'n > 0'; 0 if 'n = 0' and -1 if 'n < 0'
 */

int print_sign(int n)
{
	int ch;

	if (n > 0)
	{
		ch = 43;
		_putchar(ch);

		return (1);
	}
	else if (n == 0)
	{
		ch = 48;
		_putchar(ch);

		return (0);
	}
	else
	{
		ch = 45;
		_putchar(ch);

		return (-1);
	}
}

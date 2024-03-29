#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number.
 * @n: the number whose last digit is to be printed
 *
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	n = n % 10;

	if (n > 0)
	{
		_putchar(n + '0');
	}
	else
	{
		n *= -1;

		_putchar(n + '0');
	}
	return (n);
}

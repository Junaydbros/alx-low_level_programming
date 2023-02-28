#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: the number of times the character '/' would be printed
 * The diagonal should end with a '\n'
 * If 'n' is 0 or less, the function would only print '\n'
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int m;

	m = 0;
	while (m < (n - 1))
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar(' ');
		}
		m++;
	}
		_putchar('\\');

		_putchar('\n');
}

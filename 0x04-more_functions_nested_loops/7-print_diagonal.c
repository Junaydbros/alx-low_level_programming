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
	int m, p;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (m = 0; m < n; m++)
	{
		for (p = 0; p < m; p++)
		{
			_putchar(' ');
		}

		_putchar('\\');

		_putchar('\n');
	}
}

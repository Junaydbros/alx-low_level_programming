#include <stdio.h>
#include "main.h"

/**
 * print_line - a function that draws a striaght line in the terminal
 * @n: the number of times the character '_' would be printed.
 * The straight line should end with a '\n'
 * If 'n' is 0 or less, the function should only print '\n'
 *
 * Return: void
 */

void print_line(int n)
{
	int m;

	m = 0;
	while (m < n)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
		m++;
	}
	_putchar('\n');
}

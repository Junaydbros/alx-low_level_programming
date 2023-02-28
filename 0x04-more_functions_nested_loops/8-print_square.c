#include <stdio.h>
#include "main.h"

/**
 * print_square - a function that prints a square
 * @size: the size of the square
 * If the size of the square is 0 or less, function should just print new line
 * Character '#' would be used to print the square
 *
 * Return: void
 */

void print_square(int size)
{
	int p, q;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (p = 1; p <= size; p++)
	{
		for (q = 0; q <= p; q++)
		{
			_putchar('#');
		}

		_putchar('#');

		_putchar('\n');
	}
}

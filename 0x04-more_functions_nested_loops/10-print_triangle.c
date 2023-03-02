#include <stdio.h>
#include "main.h"

/**
 * print_triangle - a function that prints a triangle
 * @size: the size of the triangle
 * If the size is 0 or less, the function should print only a new line
 * Character '#' would be used in printing the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (x = 0; x < size; x++)
	{
		for (y = x; y > 0; y--)
		{
			_putchar(' ');
		}

		_putchar('#');

		_putchar('\n');
	}
}

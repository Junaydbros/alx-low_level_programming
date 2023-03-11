#include <stdio.h>
#include "main.h"

/**
 * print_times_table - a function that prints 'n' times table of any number
 * @n: a random integer whose times table is to be printed
 *
 * Return: void
 */

void print_times_table(int n)
{
	int a, b;

	if (n < 15 || n > 0)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				if (n < b)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}

				else
				{
				_putchar(n + '0');
				}
			}

			_putchar('\n');
		}
	}
	_putchar('\n');
}

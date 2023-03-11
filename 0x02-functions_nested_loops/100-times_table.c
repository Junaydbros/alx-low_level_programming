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
	int a, b, c;

	if (n < 15 || n > 0)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('0');

			for (b = 1; b <= n; b++)
			{
				_putchar(',');
				_putchar(' ');

				c = a * b;

				if (c <= n)
				{
					_putchar(' ');
				}

				else
				{
					_putchar((c / 10) + '0');
				}

				_putchar((c % 10) + '0');
			}

			_putchar('\n');
		}
	}
}

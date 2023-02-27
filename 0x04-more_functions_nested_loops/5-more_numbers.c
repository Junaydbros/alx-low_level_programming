#include <stdio.h>
#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers from 0 to 14
 * The numbers printed would be followed by a new line
 *
 * Return: void
 */

void more_numbers(void)
{
	int c, d;

	for (c = 0; c <= 9; c++)
	{
		for (d = 0; d <= 14; d++)
		{
			if (d >= 10)

				_putchar('\n');

			_putchar((d % 10) + '0');
		}
	}

	_putchar('\n');
}

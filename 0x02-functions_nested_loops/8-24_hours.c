#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - a function that prints every minute of the day of Jack Bauer
 * The program printing starts from 00:00 to 23:59
 *
 * Return: void
 */

void jack_bauer(void)
{
	int n;

	for (n = 0; n <= 23; n++)
	{
		for (n = 0; n <= 59; n++)
		{
			_putchar((n + '0') / 10);
			_putchar((n + '0') % 10);
			_putchar(':');
			_putchar((n + '0') / 10);
			_putchar((n + '0') % 10);
		}

		_putchar('\n');
	}

		return (0);
}

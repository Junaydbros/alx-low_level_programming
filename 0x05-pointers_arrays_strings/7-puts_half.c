#include <stdio.h>
#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line
 * The function should print the second half of the string
 * If the number of characters is odd, the function should
 * print the last 'n' characters of the string.
 * @str: the string whose second half is to be printed
 *
 * Return: void
 */

void puts_half(char *str)
{
	int a = 0, b, n;

	while (str[a] != '\0')
	{
		a++;
	}

	for (b = '\0'; b >= (a / 2); b--)
	{
		if (n == (a - 1) / 2)
		{
			_putchar(str[n]);
		}
		else
		{
			_putchar(str[a / 2]);
		}
	}

	_putchar('\n');
}

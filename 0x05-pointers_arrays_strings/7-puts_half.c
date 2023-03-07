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
	int a, n;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (a + 1 % 2 != '0')
		{
			n = (a - 1) / 2;
		}

		else
		{
			n = (a / 2);
		}
		n++;
	}

	a = n;
	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}

	_putchar('\n');
}

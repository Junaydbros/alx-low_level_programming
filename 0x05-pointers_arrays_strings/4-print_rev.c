#include <stdio.h>
#include "main.h"

/**
 * print_rev - function that prints a string in reverse followed by a new line
 * @s: the string to be printed in reverse
 *
 * Return: void
 */

void print_rev(char *s)
{
	int a = 0, b;

	while (s[a] != '\0')
	{
		a++;
	}

	b = 0;
	while (b <= (a - 1))
	{
		_putchar(s[b]);
		b++;
	}

	_putchar('\n');
}

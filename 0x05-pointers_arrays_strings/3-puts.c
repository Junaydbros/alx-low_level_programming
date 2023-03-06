#include <stdio.h>
#include "main.h"

/**
 * _puts - a function that prints a string followed by a new line
 * @str: the string to be printed
 *
 * Return: void
 */

void _puts(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		count++;
		str++;
	}

	_putchar('\n');
}

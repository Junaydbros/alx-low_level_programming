#include <stdio.h>
#include "main.h"

/**
 * puts2 - a function that prints every other character of a string
 * The printout starts with the first character, followed by a new line.
 * @str: the character to be alternated in the whole string
 *
 * Return: void
 */

void puts2(char *str)
{
	int b;

	for (b = 0; str[b] != '\0'; b++)
	{
		if (b % 2 == 0)
		{
			_putchar(*str);
		}
	}

	_putchar('\n');
}

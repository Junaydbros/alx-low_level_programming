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
	int a = 0;

	while (str[a] != '\0')
	{
		str[a] = str[a] + 1;

		_putchar(*str);
		a++;
	}

	_putchar('\n');
}

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
	int a = 0, b;

	while (str[a] != '\0')
	{
		a++;
	}

	for (b = 0; str[b] != '\0'; b++)
	{
		str[b] = str[b] + 1;
	}
	_putchar(*str);

	_putchar('\n');
}

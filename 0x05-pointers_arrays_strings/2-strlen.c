#include <stdio.h>
#include "main.h"

/**
 * _strlen - a function that prints the length of a string
 * @s: the string's length to be returned
 *
 * Return: void
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
	}
	return (count);
}

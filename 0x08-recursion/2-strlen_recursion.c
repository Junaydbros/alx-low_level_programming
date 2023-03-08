#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: the string whose length is to be checked
 *
 * Return: void
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}

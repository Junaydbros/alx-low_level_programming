#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string recursively
 * @s: string length to be returned
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

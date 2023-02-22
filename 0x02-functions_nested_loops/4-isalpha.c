#include <stdio.h>
#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character, upper or lower
 * @c: the character to be checked
 *
 * Return: 1 if the character is a letter and 0 if otherwise.
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' && c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}

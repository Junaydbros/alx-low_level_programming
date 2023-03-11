#include <stdio.h>
#include "main.h"

/**
 * _islower - function that checks for lowercase character
 * @c: the character whose lower is to be checked
 *
 * Return: 1 if lowercase, 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include <stdio.h>
#include "main.h"

/**
 * _isdigit - a function that checks for a digit (0 through 9)
 * @c: the digit to be checked
 *
 * Return: 1 if c is a digit and 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 1 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

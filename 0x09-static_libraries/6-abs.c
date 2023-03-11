#include <stdio.h>
#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer.
 * @a: the integer whose absolute value is to be computed
 *
 * Return: void
 */

int _abs(int a)
{
	if (a >= 0)
	{
		return (a);
	}
	else
		return (-a);
}

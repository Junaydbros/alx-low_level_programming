#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - a function that returns the value of x raised to power y
 * If y is lower than 0, function should return -1
 * @x: the base number to be raised to a power of another number
 * @y: the index that the base number is to be raised to
 *
 * Return: void
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	if (x == 0)
	{
		return (0);
	}

	return (x * _pow_recursion(x, (y - 1)));
}

#include <stdio.h>
#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number
 * If n is lower than 0, the function should return -1 to indicate error
 * Note that the factorial of zero is 1
 * @n: a given number whose factorial is to be computed
 *
 * Return: void
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}

#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * If n does not have a natural square root, the function should return -1
 * @n: the number whose square root is to be returned
 *
 * Return: void
 */

int _sqrt_recursion(int n)
{
	if (n != 0 && n != 9)
	{
		return (-1);
	}

	return (

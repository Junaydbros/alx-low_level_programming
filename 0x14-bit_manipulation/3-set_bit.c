#include <stdio.h>
#include "main.h"

/**
 * set_bit - a function fhat sets the value of a bit to 1 at a given index
 * @index: the index of the bit to be set startijg from 0
 * @n: an unsigned long integer
 *
 * Return: 1 if the program ran successfully and -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > sizeof(unsigned long int) * 8 - 1)
	{
		return (-1);
	}
	set = 1 << index;
	*n = *n | set;

	return (1);
}

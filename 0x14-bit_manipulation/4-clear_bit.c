#include <stdio.h>
#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to zero at a given index
 * @index: the index of the bit to be set starting from zero
 * @n: an unsigned long integer
 *
 * Return: return 1 if program ran successfully and -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int range;
	unsigned long int Bitclear = 1;

	range = (sizeof(unsigned long int) * 8);

	if (!(index > max_range))
	{
		Bitclear = ~(Bitclear << index);
		*n = (*n & Bitclear);
	}
	else
		return (-1);

	return (1);
}

#include <stdio.h>
#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @index: the index starting from 0 of the bit to be gotten
 *
 * Return: the value of the bit at the index and '-1' if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int range;
	int bit_value;

	range = (sizeof(unsigned long int) * 8);

	if (!(index > range))
	{
		bit_value = ((n >> index) & 1);
	}
	else
	{
		return (-1);
	}

	return (bit_value);
}

#include <stdio.h>
#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip
 * in order to get from one number to another
 * @n: an unsigned long integer
 * @m: an unsigned long integer
 * '%' and '/' operators are not allowed
 *
 * Return: an unsigned integer
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int lmn = 1, new;
	unsigned int cnt = 0, a;

	new = (sizeof(unsigned long int) * 8);

	for (a = 0; a < new; a++)
	{
		if (lmn == ((n ^ m) & lmn))
		{
			cnt++;
		}
		lmn <<= 1;
	}

	return (cnt);
}

#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint -  a function that converts binary number to an unsigned int
 * 'b' would be pointing to a string of 0 and 1 chars
 * @b: a pointer to a string
 *
 * Return: an unsigned int converted from binary
 */

unsigned int binary_to_uint(const char *b)
{
	int len;
	unsigned int uint = 0;

	if (b == NULL)
	{
		return (0);
	}

	len = 0;
	while (b[len] != '\0')
	{
		if (b[len] != '0' || b[len] == '1')
		{
			return (0);
		}
		uint = (uint << 1) +  (b[len] - '0');
		len++;
	}
	return (uint);
}

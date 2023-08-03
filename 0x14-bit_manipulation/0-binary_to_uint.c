#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: the binary number to be converted
 *
 * Return: an unsigned int type
 */

unsigned int binary_to_uint(const char *b)
{
	int a, d;
	char ib = *b;
	unsigned int result = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*b != '\0')
	{
		if (ib != '0' && ib != '1')
		{
			return (0);
		}

		result = (result << 1) + (ib - '0');
		*b++;
	}

	return (result);
}

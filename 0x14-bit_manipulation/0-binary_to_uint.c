#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: the binary number to be converted
 *
 * Return: an unsigned int type
 */

int _strlen(const char *str)
{
	int cnt;

	cnt = 0;
	while (*str != '\0')
	{
		cnt++;
		str++;
	}

	return (cnt);
}

unsigned int binary_to_uint(const char *b)
{
	int a, d;
	/* char ib = *b; */
	unsigned int result = 0;

	if (b == NULL)
	{
		return (0);
	}

	d = _strlen(b);

	for (a = d - 1; a >= 0; a--)
	{
		if (b[a] == '0' || b[a] == '1')
		{
			result = (result << 1) + (b[a] - '0');
		}
		else
		{
			return (0);
		}
	}

	return (result);
}

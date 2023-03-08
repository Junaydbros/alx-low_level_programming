#include <stdio.h>
#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * This function appends the 'src' string to the 'dest' string,
 * plus, it will ue at most 'n' bytes from 'src'
 * The source string does not need to be null terminated if
 * It contains 'n' or more bytes
 * @dest: the destination string pointed to
 * @src: the source string to be appended to a destination string
 * @n: the number of bytes to be used
 *
 * Return: a pointer to the resulting destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b, m;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}

	b = 0;
	while (src[b] != '\0')
	{
		b++;
	}

	for (m = 0; m < b && b < n; m++)
	{
		dest[a + m] = src[m];
	}

	return (dest);
}

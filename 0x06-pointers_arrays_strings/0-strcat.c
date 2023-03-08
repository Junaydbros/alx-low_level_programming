#include <stdio.h>
#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * This function appends the 'src' string to the 'dest' string,
 * overwriting the terminating NULL byte at the end of 'dest'
 * Afterwards, a terminating NULL byte is then added
 * @dest: the destination string pointed to
 * @src: the source string to be appended to a destination string
 *
 * Return: a pointer to the resulting destination string
 */

char *_strcat(char *dest, char *src)
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

	for (m = 0; m <= b; m++)
	{
		dest[a + m] = src[m];
	}
}

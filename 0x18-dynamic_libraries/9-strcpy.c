#include <stdio.h>
#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by 'src'
 * This includes the terminating NULL byte, to the buffer pointed to by 'dest'
 * @dest: the string pointed to by the buffer
 * @src: the string pointed to that's to be copied
 *
 * Return: the pointer to 'dest'
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	a = 0;
	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}

	dest[a] = '\0';

	return (dest);
}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - a function that creates an array of chars, and initializes it
 * The initialisation is done with a specific char.
 * @size: the size of the char array
 * @c: the character to be created and initialized
 *
 * The function returns 'NULL' if size = 0;
 * The function returns a pointer to the array, or 'NULL' if it fails
 * Return: void
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = (char *)malloc(sizeof(char) * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	*ptr = c;

	return (ptr);
}

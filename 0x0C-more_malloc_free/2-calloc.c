#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - a function that allocates memory for an array, using 'malloc'
 * @nmemb: this is an array of elements
 * @size: the number of bytes of the size of the array of elements
 * The _calloc function allocates memory for an array of 'nmemb' elements of
 * 'size' bytes each and returns a pointer to the allocated memory
 * The memory is set to zero
 * If 'nnemb' or 'size' is '0', then the function returns 'NULL
 * If 'malloc' fails, then the function should return 'NULL'
 *
 * Return: that pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	char *cast;
	unsigned int a;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	arr = (void *)malloc(size * nmemb);
	if (arr == NULL)
	{
		return (NULL);
	}

	cast = (char *)arr;
	for (a = 0; a < (size * nmemb); a++)
	{
		*(cast + a) = 0;
	}

	return (arr);
}

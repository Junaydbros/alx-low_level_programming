#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: number of bytes of memory to be allocated
 * If malloc fails, the function should cause normal process termination
 * The process termination should come with a status value of 98
 * The function a pointer to the allocated memory
 *
 * Return: that pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *mlc;

	mlc = (void *)malloc(b);
	if (mlc == NULL)
	{
		exit(98);
	}
	return (mlc);
}

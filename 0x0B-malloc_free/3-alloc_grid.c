#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional array
 * @height: the row array of the grid
 * @width: the column array of the grid
 * Each element of the grid should be initialized to 0
 * The function should return NULL on failure
 * If the width or height in the array is 0 or negative, NULL is returned
 *
 * Return: a pointer to a 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int **hptr;
	int a, b;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}

	hptr = malloc(sizeof(int *) * height);
	if (hptr == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		hptr[a] = malloc(sizeof(int) * width);
		if (hptr[a] == NULL)
		{
			for (a--; a >= 0; a--)
			{
				free(hptr[a]);
			}
			free(hptr);
			return (NULL);
		}
		for (b = 0; b < width; b++)
		{
			hptr[a][b] = 0;
		}
	}

	return (hptr);
}

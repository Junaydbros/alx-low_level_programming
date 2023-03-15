#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - a function that frees a 2 dimensional grid previously created by
 * the alloc_grid function.
 * @grid: the address of the two dimensional grid
 * @height: the row array of the two dimensional grid
 * This function would be compiled with the previous function alloc_grid.c
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int x;

	x = 0;
	while (height > 0)
	{
		free(grid[x]);
		x++;
		height--;
	}

	free(grid);
}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_grid - prints grid of integers
 * @grid: the address of the two dimensional grid
 * @width: the width of the grid
 * @height: the height of the grid
 *
 * Return: Nothing
 */

void print_grid(int **grid, int width, int height)
{
	int w;
	int h;

	h = 0;
	while (h < height)
	{
		w = 0;
		while (w < width)
		{
			printf("%d ", grid[h][w]);
			w++;
		}
		printf("\n");
		h++;
	}
}

/**
 * main - check the code for the 3-alloc_grid.c project
 *
 * Return: Always 0
 */

int main(void)
{
	int **grid;

	grid = alloc_grid(6, 4);
	printf("\n");

	grid[0][3] = 98;
	grid[3][4] = 402;

	print_grid(grid, 6, 4);

	return (0);
}

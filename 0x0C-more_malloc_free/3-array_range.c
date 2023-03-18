#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - a function that creates an array of integers
 * @min: the range of values from the first integer of the array
 * @max: the range of values up until the last integer of the array
 * The array created should contain all the values from 'min' - 'max' both incl
 * The values should be ordered from min t0 max
 * if 'min' > 'max', then 'NULL' is returned
 * If malloc fails, 'NULL' is returned
 *
 * Return: a pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *arr, arrsize, i;

	if (min > max)
	{
		return (NULL);
	}
	arrsize = max - min + 1;

	arr = (int *)malloc(sizeof(int) * arrsize);
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= max; i++)
	{
		*(arr + i) = min + i;
	}

	return (arr);
}


#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given as a parameter on
 * each element of an array.
 * @size: the array size
 * @action: a pointer to the function needed to be used
 * @array: the array element to be used
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (!array || !size || !action)
	{
		return;
	}

	for (a = 0; a < size; a++)
	{
		(*action)(array[a]);
	}
}

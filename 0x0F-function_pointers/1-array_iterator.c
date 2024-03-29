#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given as a parameter on
 * each element of an array
 * @size: size of the array
 * @action: a pointer to the function to be used
 * @array: elements of the array
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (!array || !size || !action)
	{
		return;
	}

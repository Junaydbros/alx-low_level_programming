#include <stdio.h>
#include "main.h"

/**
 * print_array - a function that prints n elements of an array of integers
 * The numbers must be separated by a comma, followed by a space and;
 * They should be displayed in the same order as they are stored in the array
 * @n: the number of elements of the array to be printed
 * @a: the array to be printed
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		if (b < (n - 1))
		{
			printf("%d, ", a[b]);
		}
		else
		{

			printf("%d", a[b]);
		}
	}

	printf("\n");
}


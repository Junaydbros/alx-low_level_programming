#include <stdio.h>
#include "main.h"

/**
 * largest_number - function that returns the largest of 3 numbers
 * @a: the first integer
 * @b: the second integer
 * @c: the third integer
 *
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > a && b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}

/**
 * main - program that prints the largest of 3 integers
 *
 * Return: 0
 */

int main(void)
{
	int a, b, c;
	int largest;

	a = 972;
	b = -98;
	c = 0;

	largest = largest_number(a, b, c);

	printf("%d is the largest number\n", largest);

	return (0);
}
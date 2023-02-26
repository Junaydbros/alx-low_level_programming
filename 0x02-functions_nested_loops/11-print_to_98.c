#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - function that prints all natural numbers from n to 98;
 * The numbers would be separated by a comma, followed by a space;
 * The function prints the first number passed to it and prints 98 as the last;
 * @n: the integer the count would start from
 *
 * Return: void
 */

void print_to_98(int n)
{
	int a;

	if (n >= 98)
	{
		for (a = n; a > 98; a--)
		{
			printf("%d, ", a);
		}

	printf("%d\n", a);
	}

	else
	{
		for (a = n; a < 98; a++)
		{
		printf("%d, ", a);
		}
	}

	printf("%d\n", a);
}

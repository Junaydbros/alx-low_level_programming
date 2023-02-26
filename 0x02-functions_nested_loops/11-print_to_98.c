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

	for (a = n; a <= 98; a++)
	{
		if (a != 98)
		{
			printf("%d, ", a);
		}

		else
		{
			printf("%d\n", a);
		}
	}

	for (a = n; a >= 98; a--)
	{
		if (a != 98)
		{
			printf("%d, ", a);
		}
		else
		{
			printf("%d\n", a);
		}
	}
}

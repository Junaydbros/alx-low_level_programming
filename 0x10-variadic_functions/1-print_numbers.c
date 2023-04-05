#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line
 * @separator: separator of strings between numbers
 * @n: the number of integers
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list print;
	unsigned int a;
	int number;

	va_start(print, n);

	for (a = 0; a < n; a++)
	{
		number = va_arg(print, int);
		printf("%d", number);

		if (a < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(print);
	printf("\n");
}

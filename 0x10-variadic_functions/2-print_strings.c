#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * If 'separator' is 'NULL', dont print
 * If one of the string is NULL, print (nil) instead
 * There should be a new line at the end of your function
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	char *str;
	unsigned int c;

	va_start(string, n);

	for (c = 0; c < n; c++)
	{
		str = va_arg(string, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (c < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(string);

	printf("\n");
}


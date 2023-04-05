#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - a function that prints anything
 * @format: a list of types of arguments passed to the function
 * The lists include c - char;
 * i - integer;
 * f - float;
 * s - char *, any other char should be ignored,
 * and if the string is NULL, print (nil) instead
 * 'for', 'goto', ternary operator, else, do...while are not allowed
 * Maximum of 2 while loops and if statements are allowed
 * Maximum of 9 variables are allowed for declaration
 * The function should have a new line at the end
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list anyprint;
	char *str;
	unsigned int s = 0;

	va_start(anyprint, format);

	while (format && format[s])
	{
		switch (format[s])
		{
			case 'c':
				printf("%c", va_arg(anyprint, int));
				break;
			case 'i':
				printf("%d", va_arg(anyprint, int));
				break;
			case 'f':
				printf("%f", va_arg(anyprint, double));
				break;
			case 's':
				str = va_arg(anyprint, char *);

				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
				break;
			default:
				s++;
				continue;
		}
		if (format[s + 1] != '\0' && format[s] != '\0')
		{
			printf(", ");
		}
		s++;
	}

	va_end(anyprint);
	printf("\n");
}

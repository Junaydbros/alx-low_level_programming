#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: the name to be printed by the function
 * @f: the pointer to the function that prints a name
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	f(name);
}

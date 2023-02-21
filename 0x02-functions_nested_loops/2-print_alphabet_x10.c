#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - function that prints the alphabets in lowercase
 * The function prints the alphabets ten times.
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char c;
	int a;

	a = 0;
	while (a <= 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		a++;
	}

	_putchar('\n');
}


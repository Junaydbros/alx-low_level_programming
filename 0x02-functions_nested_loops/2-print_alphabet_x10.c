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

	for (c = 'a'; c <= 'z'; c++)
	{
		c = 0;
		while (c <= 10)
		{
		_putchar(c);
		c++;
		}
	}

	_putchar('\n');
}


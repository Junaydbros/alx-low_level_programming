#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - a function that prints the alphabets in lowercase
 *
 * Return: void
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}

	_putchar('\n');
}

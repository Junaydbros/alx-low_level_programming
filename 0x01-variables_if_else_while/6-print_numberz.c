#include <stdio.h>

/**
 * main - program that prints all single digit numbers of base 10 from 0 to 9
 * This program uses putchar to print
 *
 * Return: void
 */

int main(void)
{
	char c;

	for (c = 0; c <= 9; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}

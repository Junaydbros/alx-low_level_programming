#include <stdio.h>

/**
 * main - program that prints all single digit numbers of base 10 from 0 to 9
 * This program uses putchar to print
 *
 * Return: void
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}

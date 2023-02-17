#include <stdio.h>

/**
 * main - program that prints all the numbers of base 16 in lowercase
 *
 * Return: void
 */

int main(void)
{
	int n;

	n = 48;
	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	int c;

	for (c = 65; c <= 70; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}

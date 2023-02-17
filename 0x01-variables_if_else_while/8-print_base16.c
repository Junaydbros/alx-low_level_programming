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

	for (n = 65; n <= 70; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}

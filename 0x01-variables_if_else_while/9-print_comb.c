#include <stdio.h>

/**
 * main - program that prints all possible combinations of single-digit numbers
 *
 * Return: void
 */

int main(void)
{
	int n;

	n = 48;
	while (n < 58)
	{
		if (n == 58)
		{
		putchar(n);
		}
		else
		{
		putchar(',');
		putchar(' ');
		}

		++n;
	}

	putchar('\0');

	return (0);
}

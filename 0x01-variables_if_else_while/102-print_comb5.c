#include <stdio.h>

/**
 * main - program that prints all possible combinations of 2 two-digit numbers
 * The program prints numbers ranging from 0 - 99
 * The combination of numbers should be printed in ascending order
 *
 * Return: void
 */

int main(void)
{
	int x, y;

	for (x = 0; x <= 8; x++)
	{
		for (y = x + 1; y <= 9; y++)
		{
			putchar((x % 10) + 48);
			putchar((y % 10) + 48);

				if (x == 8 && y == 9)
				{
					continue;
				}

				putchar(',');
				putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}

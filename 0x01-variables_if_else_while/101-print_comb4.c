#include <stdio.h>

/**
 * main - program that prints all possible different combinations of 3 digits
 * The three digits printed by the program must be different;
 * The numbers would be printed in ascending order
 * The program prints only the smallest combination of three digits
 *
 * Return: void
 */

int main(void)
{
	int a, b, c;

	for (a = 0; a <= 7; a++)
	{
		for (b = a + 1; b <= 8; b++)
		{
			for (c = b + 1; c <= 9; c++)
			{
				if (a == 7 && b == 8 && c == 9)
				{
					continue;
				}

				putchar((a % 10) + '0');
				putchar((b % 10) + '0');
				putchar((c % 10) + '0');
			}
		}
	}

	putchar(',');
	putchar(' ');

	putchar('\n');

	return (0);
}

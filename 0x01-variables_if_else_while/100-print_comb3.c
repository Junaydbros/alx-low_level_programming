#include <stdio.h>

/**
 * main - a program that prints all possible different combinationof two digits
 * The program ensures that the numbers are separated by ',' and a space
 * The program shows that the two digits are different
 *
 * Return: void
 */

int main(void)
{
	int m, n;

	for (m = 0; m <= 8; m++)

	{
		for (n = m + 1; n <= 9; n++)
		{
			putchar((m % 10) + '0');
			putchar((n % 10) + '0');

					if (m == 8 && n == 9)
					{
						continue;
					}


					putchar (',');
					putchar (' ');
		}
	}
	putchar ('\n');

	return (0);
}

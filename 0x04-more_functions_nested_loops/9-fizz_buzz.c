#include <stdio.h>

/**
 * main - a program testing fizzbuzz in a set of numbers
 * In this case, we'd be working with numbers from 1 - 100
 * For every multiple of three, the program prints 'Fizz' instead of the number
 * For every multiple of five, the program prints 'Buzz' instead of the number
 * For numbers which are multiples of both 3 & 5, the program prints 'FizzBuzz'
 *
 * Return: void
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((n % 5) == 0)
		{
			printf("Buzz");
		}
		else if ((n % 15) == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", n);
		}

		if (n < 100)
		{
			printf(" ");
		}
	}

	printf("\n");

	return (0);
}

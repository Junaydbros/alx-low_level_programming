#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that assigns a random number to a variable
 * every time the variable is executed.
 * The program prints the last digit of that random number
 *
 * Return: void
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is ", n);

	if ((n % 10) > 5)
	{
		printf("%d and is greater than 5\n", (n % 10));
	}

	else if ((n % 10) == 0)
	{
		printf("%d and is 0\n", (n % 10));
	}

	else
	{
		printf("%d and is less than 6 and not 0\n", (n % 10));
	}

	return (0);
}

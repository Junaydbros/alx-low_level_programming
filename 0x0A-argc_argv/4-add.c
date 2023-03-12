#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers
 * Numbers and addition of all numbers can be assumed to be stored in an 'int'
 * @argc: the argument count
 * @argv: the argument vector
 * If no  number is passed to the program, 0 is printed, followed by a new line
 * If any of the numbers contains non-digit symbols, Error is printed and 1 ret
 *
 * Return: void
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 1)
	{
		printf("0\n");
	}

	else if (**argv <= 0 && **argv >= 9)
	{
		printf("Error\n");

		return (1);
	}

	else
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);

			printf("%d\n", sum);
		}
	}

	return (0);
}

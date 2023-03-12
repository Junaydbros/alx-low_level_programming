#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 * The program prints the result of the multiplication, followed by a new line
 * Both numbers and multiplication result is assumed to be stored in an integer
 * If the program does not receive two arguments, error should be printed
 * by the program followed by a new line and 1 is returned.
 * @argc: the argument count
 * @argv: the argument vector, usually an array of strings
 *
 * Return: void
 */

int main(int argc, char *argv[])
{
	int i, prod;

	if (argc <= 2)
	{
		printf("Error\n");

		return (1);
	}
	else
	{
		prod = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", prod);
	}

	return (0);
}

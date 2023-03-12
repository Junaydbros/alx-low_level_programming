#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it.
 * The number of arguments is printed as a number followed by a new line
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: void
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}

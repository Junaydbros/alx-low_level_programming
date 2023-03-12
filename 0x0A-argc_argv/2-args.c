#include <stdio.h>

/**
 * main - a program that prints all arguments it receives
 * The program prints all arguments it receives, including the first one.
 * @argc: the argument count
 * @argv: the argument vector, usually an array of strings
 *
 * Return: void
 */

int main(int argc, char *argv[])
{
	/* (void)argc; */

	int i;

	for (i = 0; i <= argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	/* printf("\n"); */

	return (0);
}

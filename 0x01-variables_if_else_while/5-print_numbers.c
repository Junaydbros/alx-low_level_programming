#include <stdio.h>

/**
 * main - a program that prints all single digit numbers
 *
 * Return: void
 */

int main(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");

	return (0);
}

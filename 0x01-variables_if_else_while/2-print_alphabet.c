#include <stdio.h>

/**
 * main - program that prints the alphabets in lowercase
 * The whole program would be making use of putchar function
 *
 * Return: void
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}

#include <stdio.h>

/**
 * main - a program that prints the alphabets in lowercase
 * The program prints all the letters except 'q' and 'e'
 *
 * Return: void
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'd' && c <= 'p' && c <= 'z'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}

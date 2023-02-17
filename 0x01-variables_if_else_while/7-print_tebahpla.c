#include <stdio.h>

/**
 * main - a program that prints the alphabets as lowercase in reverse
 *
 * Return: void
 */

int main(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}

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

	c = 'a';
	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
		putchar(c);
		}
		c++;
	}

	putchar('\n');

	return (0);
}

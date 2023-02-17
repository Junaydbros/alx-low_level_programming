#include <stdio.h>

/**
 * main - a program that prints alphabets in lowercase
 * The program would print these alphabets in both upper and lower cases.
 *
 * Return: void
 */

int main(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}

#include <stdio.h>
#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number
 * Arrays, malloc, operators '%' and '/' are not allowed
 * @n: the number whose binary representation is printed
 *
 * Return: void
 */
                                                  void print_binary(unsigned long int n)            {
	unsigned long int rep = 1ul << (sizeof(unsigned long int) * 8 - 1);
	int a;

	for (a = 0; rep > 0; a++)                         {
                _putchar((n & rep) ? '1' : '0');
                rep >>= 1;
        }
}

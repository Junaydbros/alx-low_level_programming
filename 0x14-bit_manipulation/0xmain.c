#include "main.h"

/**
 * main - test program to check 0-uint code
 *
 * Return: void
 */

int main(void)
{
	unsigned int n;
	
	n = binary_to_uint("1");
	printf("%u\n", n);
	n = binary_to_uint("101");
	printf("%u\n", n);
	n = binary_to_uint("1e01");
	printf("%u\n", n);
	n = binary_to_uint("1100010");
	printf("%u\n", n);
	n = binary_to_uint("0000000000000000000110010010");
	printf("%u\n", n);
	
	return (0);
}

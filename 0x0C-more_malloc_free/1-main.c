#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code for the 1-string_nconcat.c project
 *
 * Return: Always 0
 */

int main(void)
{
	char *concat;

	concat = string_nconcat("Best ", "School !!!", 6);
	printf("%s\n", concat);

	free(concat);

	return (0);
}

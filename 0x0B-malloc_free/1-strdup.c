#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * in memory which contains a copy of the string given as a parameter
 * The _strdup() function returns a pointer to a new string which is
 * a duplicate of the string str.
 * The memory for the new string is obtained with malloc, and can be freed with
 * 'free'
 * @str: the string to be duplicated
 * The function returns NULL if str = NULL
 * The function returns a pointer to the duplicated string on success;
 * However, if the memory available is insufficient, NULL is returned.
 *
 * Return: pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *ptr, *dptr;
	int m, count;

	if (str == NULL)
	{
		return (NULL);
	}

	/* ptr = (char *)malloc(sizeof(char)); */

	count = 0;
	while (*str != '\0')
	{
		count++;
	}
	m = *str;

	ptr = (char *)malloc(sizeof(char) * m);
	dptr = strdup(str);

	if (dptr < ptr)
	{
		return (NULL);
	}

	return (dptr);
}

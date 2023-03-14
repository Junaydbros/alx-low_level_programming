#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 * The function should return NULL on failure
 * @s1: the first/source string
 * @s2: the second string to be appended to a source string
 * The function should return a pointer that points to a newly allocated space
 * in memory which contains the contents of source string, followed by contents
 * of the appended string, then NULL terminated
 * If NULL is passed, the string should be treated as an empty string
 *
 * Return: a pointer pointing to the  newly allocated space
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int l1, l2, tlen, a, b, c;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	l1 = 0;
	while (s1[l1] != '\0')
	{
		l1++;
	}
	l2 = 0;
	while (s2[l2] != '\0')
	{
		l2++;
	}
	tlen = l1 + l2;
	ptr = (char *)malloc((sizeof(char) * tlen) + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (a = 0; s1[a] != '\0'; a++)
	{
		ptr[a] = s1[a];
	}
	for (b = a, c = 0; s2[c] != '\0'; b++)
	{
		ptr[b] = s2[c];
		c++;
	}
	ptr[b] = '\0';

	return (ptr);
}

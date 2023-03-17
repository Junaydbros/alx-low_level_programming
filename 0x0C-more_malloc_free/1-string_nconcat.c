#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: the destination string that another string would be added
 * @s2: the source string whose first n bytes would be added to a destination
 * @n: number of bytes from source string that'd added to destination string
 * If n >= the length of source string, then s2 would be used entirely
 * If 'NULL' is passed, treat as an empty string
 * If the function fails, it should return 'NULL'
 * The returned pointer shall point to a newly allocated space in memory,
 * which contains destination string, followed by the first 'n' bytes of source
 * string, and null terminated.
 *
 * Return: that newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len1, len2, tlen, i, j, k;

	if (str == NULL)
	{
		s1 = "";
	}
	if (str == NULL)
	{
		s2 = "";
	}
	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2++;
	}
	tlen = len1 + len2;
	if (n >= s2[len2])
	{
		n = s2[len2];
	}
	str = (char *)malloc((sizeof(char) * tlen) + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}
	for (j = i, k = 0; s2[k] != '\0'; j++)
	{
		str[j] = s2[n];
		n++;
	}
	str[s1[len2] + n] = '\0';
	return (str);
}

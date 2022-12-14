#include <stdio.h>
#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: the string that holds the character
 * @c: the character to be located
 * Return: pointer to the first occurence of the character c in string s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
		return (s);

	return (NULL);
}

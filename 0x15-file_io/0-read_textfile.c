#include <stdio.h>
#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it
 * to the POSIX standard output
 * @letters: the number of letters the function should print
 * @filename: the name of the text the function would be reading from
 * The function returns the actual number of letters it should read and print
 *
 * Return: the actual number of letters the function could read and print;
 * 0 if filename is NULL, and 0 if write fails and doesn't write
 * the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int h;
	ssize_t Rcnt, Wcnt;
	char *abs;

	if (filename == NULL)
	{
		return (0);
	}

	h = fopen(filename, r);
	if (h == -1)
	{
		return (0);
	}

	abs = malloc(sizeof(char) * letters + 1);
	if (abs == NULL)
	{
		return (0);
	}

	Rcnt = read(h, abs, letters);
	if (Rcnt == -1)
	{
		return (0);
	}

	Wcnt = write(STDOUT_FILENO, abs, Rcnt);
	if (Wcnt != Rcnt || Wcnt == -1)
	{
		return (0);
	}

	abs[Wcnt] = '\0';
	close(h);
	free(abs);

	return (Wcnt);
}

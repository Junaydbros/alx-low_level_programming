#include <stdio.h>
#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * The created file should have the 'rw-------' permission and if
 * the file already exists, the permissions should not be altered
 * The file should be truncated if it already exists
 *
 * Return: 1 on success, -1 on failure if file cannot be created/written, etc
 * Function should return -1 if filename is NULL
 * An empty file should be created if text_content is NULL
 */

int create_file(const char *filename, char *text_content)
{
	int a;
	int Wcnt, Tcnt = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	a = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (a == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}

	while (text_content[Tcnt] != '\0')
	{
		Tcnt++;
	}

	Wcnt = write(a, text_content, Tcnt);

	if (Wcnt == -1)
	{
		return (-1);
	}

	close(a);

	return (1);
}

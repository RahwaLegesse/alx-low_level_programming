#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - Create a function that creates a file.
 * @filename:the name to the file
 * @text_content:the file to write
 * Return: -1 if it fails 1 if it passes
 */
int create_file(const char *filename, char *text_content)
{
	int w, p, j = 0;

	if (filename == NULL)
		return (0);
	if (text_content != NULL)
	{
		for (j = 0; text_content[j];)
			j++;
	}
	p = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(p, text_content, j);
	if ((w == -1) || (p == -1))
		return (-1);
	close(p);
	return (1);
}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename:file to write
 * @text_content:content of text
 * Return: Always 0.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int p, w, j = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (j = 0; text_content[j];)
			j++;
	}
	p = open(filename, O_WRONLY | O_APPEND);
	w = write(p, text_content, j);
	if ((p == -1) || (w == -1))
		return (-1);
	close(p);
	return (1);
}

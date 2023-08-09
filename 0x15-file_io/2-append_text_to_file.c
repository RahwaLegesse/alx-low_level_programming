#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - add the new text to the old one
 * @filename:pointer to the file
 * @text_content:the content of the file
 * Return: 1 if it passes -1 if failed
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int p, wt;
	int length = 0;

	if (filename == NULL)
	return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	p = open(filename, O_WRONLY | O_APPEND);
	wt = write(p, text_content, length);
	if (p == -1)
		return (-1);
	if (wt == -1)
		return (-1);
	close(p);
	return (1);
}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename:file name of the content
 * @text_content:pointer to the text
 * Return: 1 if it pass -1 if it failed
 */
int create_file(const char *filename, char *text_content)
{
	int p, wt;
	int length = 0;

	if (filename == 0)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length]; )
			length++;
	}
	p = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wt = write(p, text_content, length);
	if (p == -1)
		return (-1);
	if (wt == -1)
		return (-1);
	close(p);
	return (1);
}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * @filename:file to be read
 * @letters:number of letters
 * Return: wt if it counts otherwise return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *temp;
	ssize_t t, p, wt;

	p = open(filename, O_RDONLY);
	if (p == -1)
		return (0);
	temp = malloc(sizeof(char) * letters);
	t = read(p, temp, letters);
	wt = write(STDOUT_FILENO, temp, t);
	free(temp);
	close(p);
	return (wt);
}


#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - prints it to the POSIX standard output
 * @filename:file name
 * @letters:number of words
 * Return: out put to put on the terminal
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t w, p, r;

	p = open(filename, O_RDONLY);
	if (p == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	r = read(p, buff, letters);
	w = write(STDOUT_FILENO, buff, r);
	free(buff);
	close(p);
	return (w);
}

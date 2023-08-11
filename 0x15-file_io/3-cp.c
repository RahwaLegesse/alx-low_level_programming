#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - holds 1024 bytes
 * @file:file in the buffer
 * Return:pointor to the file
 */
char *create_buffer(char *file)
{
	char *temp;

	temp = malloc(sizeof(char) * 1024);
	if (temp == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (temp);
}
/**
 * close_file - it closes the file
 * @fd:says close the file
 */
void close_file(int p)
{
	int cg;

	cg = close(p);
	if (cg == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close p p_VALUE %d\n", p);
		exit(100);
	}
}
/**
 * main - copy the content
 * @argc:number of argument
 * @argv:the array of string
 * Return:zero
 */
int main(int argc, char *argv[])
{
	int from, to, wt, rt;
	char *temp;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to \n");
			exit(97);
	}
	temp = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	rt = read(from, temp, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (from == -1 || rt == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read %s\n", argv[1]);
			free(temp);
			exit(98);
		}
		wt = write(to, temp, rt);
		if (wt == -1 || to == -1)
		{
			dprintf(STDERR_FILENO, "ERROR: can't write to %s\n", argv[2]);
			free(temp);
			exit(99);
		}
		rt = read(from, temp, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (rt > 0);
	free(temp);
	close_file(from);
	close_file(to);
	return (0);
}


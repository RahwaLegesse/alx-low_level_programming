#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *create_buffer(char *file);
void close_file(int p);

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
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (temp);
}
/**
 * close_file - it closes the file
 * @p:says close the file
 */
void close_file(int p)
{
	int cg;

	cg = close(p);
	if (cg == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - copy the content
 * @argc:number of argument
 * @argv:the array of string
 * Return:zero
 * Description - if the argument no incorrect-exit(97)
 * If file_from not exist or not be read - exit(98)
 * If file_to not created or written to - exit(99)
 * If file_to or file_from not be closed - exit(100)
 */
int main(int argc, char *argv[])
{
	int from, to, wt, rt;
	char *temp;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	temp = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	rt = read(from, temp, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (from == -1 || rt == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		wt = write(to, temp, rt);
		if (to == -1 || wt == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
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


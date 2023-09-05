#include <stdio.h>
#include "main.h"
#include <stdlib.h>
char *to_create(char *file);
void to_close(int fd);
/**
 * to_create - create address
 * @file:storage
 * Return:address
 */
char *to_create(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buf);
}
/**
 * to_close - closing function
 * @fd:file direc
 */
void to_close(int fd)
{
	int num;

	num = close(fd);
	if (num == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - main function
 * @argc:numbers of argument
 * @argv:array
 * Return:returned
 */
int main(int argc, char *argv[])
{
	int source, dest, rd, wr;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = to_create(argv[2]);
	source = open(argv[1], O_RDONLY);
	rd = read(source, buf, 1024);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (source == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}
		wr = write(dest, buf, rd);
		if (dest == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}
		rd = read(source, buf, 1024);
		dest = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);
	free(buf);
	to_close(source);
	to_close(dest);
	return (0);
}


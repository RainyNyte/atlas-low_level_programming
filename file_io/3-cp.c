#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*create_buf - allocates 1024 bytes for buffer
*@file: name of file buffer is storing chars for
*
*Return: pointer to newly allocated buffer
*/

char *create_buf(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(2, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buf);
}

/**
*close_file - closes file descriptors
*@fd: file descriptor to be closed
*/

void close_file(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
*main - copies contents of file to another file
*@argc: number of arguments
*@argv: array of pointers to arguments
*
*Return: 0 on success
*/

int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buf;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = create_buf(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buf, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (from == -1 || r == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		free(buf);
		exit(98);
	}
	while (r > 0);
	{
		w = write(to, buf, r);
		if (to == -1 || w == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}
		r = read(from, buf, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	}
	free(buf);
	close_file(from);
	close_file(to);
	return (0);
}

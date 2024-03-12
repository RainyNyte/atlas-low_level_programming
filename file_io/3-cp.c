#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#define BUF_SIZE 1024

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
	char buf[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from = open(argv[1], O_RDONLY);
	r = read(from, buf, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (from == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(98);
	}
	if (to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		close (from);
		exit(99);
	}
	do
	{
		w = write(to, buf, r);
		if (w != r)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		r = read(from, buf, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	}while (r > 0);
	if (r == -1)
	{
		dprintf(1, "Error: Can't read from file %s\n", argv[1]);
		close(from);
		close(to);
		return (98);
	}
	if (close(from) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", from);
		return (100);
	}

	if (close(to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", to);
		return (100);
	}

	return (0);
}

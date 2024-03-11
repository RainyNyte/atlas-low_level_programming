#include "main.h"

/**
 *read_textfile - Reads a text file and prints it to the POSIX standard output
 *@filename: The name of the file to read.
 *@letters: The number of letters to read and print.
 *
 *Return: The actual number of letters read and printed, or 0 on failure.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf = malloc(sizeof(char) * letters);
	int fd = open(filename, O_RDONLY);
	ssize_t bytes_read = read(fd, buf, letters);
	ssize_t bytes_written = write(STDOUT_FILENO, buf, bytes_read);

	if (filename == NULL)
	{
		 return (0);
	}

	if (fd == -1)
	{
		 return (0);
	}

	if (buf == NULL)
	{
		 close(fd);
		 return (0);
	}

	if (bytes_read == -1)
	{
		 close(fd);
		 free(buf);
		 return (0);
	}

	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		 close(fd);
		 free(buf);
		 return (0);
	}
	close(fd);
	free(buf);
	return (bytes_written);
}

#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 *create_file - Creates a file with the specified name and writes the given
 *text content to it.
 *@filename: The name of the file to create.
 *@text_content: The text content to write to the file.
*
*Return: 1 on success, -1 on failure.
*/

int create_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

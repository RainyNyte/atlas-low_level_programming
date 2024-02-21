#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked- allocates a space in memory, if it fails it exits
 *with a status value of 98
 *@b: value to use for malloc
 *
 *Return: pointer to the allocated memory or 98
 */

void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
	{
		exit(98);
	}
	else
	{
		return (mem);
	}
}

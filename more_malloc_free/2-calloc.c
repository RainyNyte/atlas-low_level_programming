#include "main.h"
#include <stdlib.h>

/**
 *_calloc- a recreation of the existing calloc function
 *@nmemb: number of elements in the array to be allocated
 *@size: the amount of bytes to allocate to each element in the array
 *
 *Return: NULL if malloc fails or either of the parameters passed to it are 0
 *otherwise returns a pointer to the memory allocated.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	arr = malloc(nmemb * size);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		((char *)arr)[i] = 0;
	}
	return (arr);
}

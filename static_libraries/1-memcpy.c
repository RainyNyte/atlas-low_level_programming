#include "main.h"

/**
*_memcpy - copies memory area
*@dest: bytes are copied here
*@src: bytes are copied from here
*@n: amount of bytes copied from memory
*
*Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

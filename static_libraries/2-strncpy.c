#include "main.h"

/**
 *_strncpy- coppies at most the first n characters of a string
 *@dest: string to coppy to
 *@src: string to be coppied
 *@n: maximum number of character to copy
 *
 *Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
		for ( ; i < n && src[i] == '\0'; i++)
		{
			dest[i] = '\0';
		}
	}
	return (dest);
}

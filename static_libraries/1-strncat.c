#include "main.h"

/**
*_strncat- concantanates two strings
*@dest: string to be copied to
*@src: string to pull from
*@n: maximum number of bytes to copy if dest is too small
*
*Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int len = 0;

	while (dest[i++])
	{
		len++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[len++] = src[i];
	}
	return (dest);
}

#include "main.h"

/**
*_memset - fills memory with a constant byte
*@s: pointer
*@b: constant
*@n: number of bytes
*
*Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	int index = 0;

	for (; n > 0; index++)
	{
		s[index] = b;
		n--;
	}
	return (s);
}

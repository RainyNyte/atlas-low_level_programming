#include "main.h"

/**
*_strpbrk - search a string of any set of bytes
*@s: pointer
*@accept: pointer
*
*Return: 0
*/

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *p = accept;

		while (*p != '\0')
		{
			if (*s == *p)
			{
				return (s);
			}
			p++;
		}
		s++;
	}
	return (0);
}

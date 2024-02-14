#include "main.h"
#include <stddef.h>

/**
*_strchr - locates a character in a string
*@s: string
*@c: character
*
*Return: C or NULL
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (0);
}

#include "main.h"

/**
*_strspn - gets the length of a prefix substring
*@s: pointer
*@accept: pointer
*
*Return: counter
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int counter = 0;
	int i;
	char *a;

	while (*s)
	{
		i = 0;

		for (a = accept; *a; a++)
		{
			if (*s == *a)
			{
				i = 1;
				break;
			}
		}
		if (!i)
		{
			break;
		}
	s++;
	counter++;
	}
	return (counter);
}

#include "main.h"

/**
 *_strlen- finds the length of a string
 *@s: pointer to the string that we are finding the length of
 *
 *Return: the length of the string located at *s
 */

int _strlen(char *s)
{
	int len = 0;
	int i = 0;

	if (s != NULL)
	{
		while (s[i] != '\0')
		{
			len++;
			i++;
		}
	}
	return (len);
}

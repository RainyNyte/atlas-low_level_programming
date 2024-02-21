#include "main.h"
#include <stdlib.h>

/**
 *string_nconcat- concatenates two strings, if the second string is longer than
 *n, then only the first n bytes of the second string will be
 *concatenated to output
 *@s1: the first string to be concatenated
 *@s2: the second string to be concatenated
 *@n: the number of bytes to stop at on the second string
 *
 *Return: NULL on failure, or a pointer to the newly concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = n;
	unsigned int i = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i]; i++)
	{
		len++;
	}

	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
	{
		return (NULL);
	}

	len = 0;

	for (i = 0; s1[i]; i++)
	{
		concat[len++] = s1[i];
	}
	for (i = 0; s2[i] && i < n; i++)
	{
		concat[len++] = s2[i];
	}
	concat[len] = '\0';

	return (concat);
}

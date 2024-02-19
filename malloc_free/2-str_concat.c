#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
*len_finder- finds the length of a pair of strings for use in str_concat
*@s1: first string to find length of
*@s2: second string to find length of
*
*Return: the combined length of both s1 and s2
*/

int len_finder(char *s1, char *s2)
{
	int len = 0;
	int g = 0;
	int h = 0;

	if (s1 != NULL)
	{
		while (s1[g] != '\0')
		{
			len++;
			g++;
		}
	}
	if (s2 != NULL)
	{
		while (s2[h] != '\0')
		{
			len++;
			h++;
		}
	}
	return (len);
}

/**
*str_concat- function that concatonates two strings into a new string in
*a new space in memmory
*@s1: the first string to contatonate
*@s2: the second string to concatonate
*
*Return: NULL on failure or the new_str on success
*/

char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int len;
	int i = 0;
	int j = 0;

	len = len_finder(s1, s2);
	new_str = malloc(sizeof(char) * (len + 1));

	if (new_str == NULL)
	{
		return (NULL);
	}
	if (s1 != NULL)
	{
		while (s1[i] != '\0')
		{
			new_str[i] = s1[i];
			i++;
		}
	}
	if (s2 != NULL)
	{
		while (s2[j] != '\0')
		{
			new_str[i] = s2[j];
			i++;
			j++;
		}
	}
	new_str[i] = '\0';
	return (new_str);
}

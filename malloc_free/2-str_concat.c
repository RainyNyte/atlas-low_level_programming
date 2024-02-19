#include "main.h"
#include <string.h>
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int len;
	int i = 0;
	int j = 0;

	len = strlen(s1) + strlen(s2);
	new_str = malloc(sizeof(char) + len);

	if (new_str == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL)
	{
		while (s2[i] != '\0')
		{
			new_str[i] = s2[i];
			i++;
		}
	}
	if (s2 == NULL)
	{
		while (s1[i] != '\0')
		{
			new_str[i] = s1[i];
			i++;
		}
	}
	else
	{
		while (s1[i] != '\0')
		{
			new_str[i] = s1[i];
			i++;
		}
		while (s2[j] != '\0')
		{
			new_str[i] = s2[j];
			i++;
			j++;
		}
	}
	return (new_str);
}

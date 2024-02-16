#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
*_strdup - creates a string that is a duplicate of the designated string
*@str: the string to duplicate
*
*Return: pointer of str or NULL if str = NULL or insuficient memory
*was available
*/

char *_strdup(char *str)
{
	char *car;
	unsigned int i = 0;
	unsigned int j;


	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}
	car = (char *)malloc((sizeof(char) * i) + 1);
	if (car == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= i; j++)
	{
		car[j] = str[j];
	}
	return (car);
}

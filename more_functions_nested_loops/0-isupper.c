#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *_isupper- function that checks if the character(c) passed to it is uppercase
 *
 *Return: 1 if uppercase, 0 otherwise
 */

int _isupper(c)
{
	int temp = c;

	if (isupper(temp))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

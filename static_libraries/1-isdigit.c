#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *_isdigit- function that checks if the character(c) passed to it is a number
 *@c: the character to be checked
 *
 *Return: 1 if digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

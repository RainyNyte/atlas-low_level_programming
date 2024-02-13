 #include "main.h"
#include <ctype.h>

/**
 *_isalpha- checks if a character is a letter
 *@c: the character to be checked
 *
 *Return: 1 if alpha, 0 otherwise
 */

int _isalpha(int c)
{
	if (isupper(c) || islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

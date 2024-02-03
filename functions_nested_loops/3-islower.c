#include "main.h"
#include <ctype.h>

/**
 *_islower- use arrays of ascii values to check if c is lowecase
 *@c: the character to be checked
 *
 *Return: 1 if c is lowecase, 0 otherwise
 */

int _islower(int c)
{
	if (islower(c))
	{
		return(1);
	}
	else
	{
		return(0);
	}
}

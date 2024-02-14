#include "main.h"

/**
*_strcmp - compares two strings
*@s1: string
*@s2: string
*
*Return: compared strings
*/

int _strcmp(char *s1, char *s2)
{
	char *op1 = s1;
	char *op2 = s2;


	while (*op1 != '\0' && *op2 != '\0')
	{
		if (*op1 != *op2)
		{
			return (*op1 - *op2);
		}
		op1++;
		op2++;
	}
	return (*op1 - *op2);
}

#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *puts_half- prints second half of a string
 *@str: the string to print from
 *
 *Return: void
 */

void puts_half(char *str)
{
	int len = strlen(str);
	int n = len - 1;

	if (len % 2 == 0)
	{
		printf("%s\n", str + len/2);
	}
	else
	{
		printf("%s\n", str + n/2);
	}
}

#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 *rev_string- reverses a given string
 *@s: pointer to the string to reverse
 *
 *Return: void
 */

void rev_string(char *s)
{
	int length = strlen(s);
	int i;
	int j;
	char a;

	for (i = 0, j = length - 1; i <= j; i++, j--)
	{
		a = s[i];
		s[i] = s[j];
		s[j] = a;
	}
}

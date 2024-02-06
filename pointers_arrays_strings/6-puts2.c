#include "main.h"
#include <stdio.h>

/**
 *puts2- prints every other value from a string
 *@s: pointer to the string to print from
 *
 *Return: void
 */

void puts2(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		putchar(s[i]);
		i += 2;
	}
	putchar('\n');
}

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
	char a;

	while (s[i] != '\0')
	{
		a = s[i];
		printf("%c", a);
		i += 2;
	}
	printf("\n");
}

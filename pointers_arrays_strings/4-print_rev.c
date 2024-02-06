#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 *print_rev- reads a given string and prints it in reverse
 *@s: pointer to the string to reverse
 *
 *Return: void
 */

void print_rev(char *s)
{
	int length = strlen(s);
	char reverse[999];
	int i;
	int j;
	char a;

	strcpy(reverse, s);
	for (i = 0, j = length - 1; i <= j; i++, j--)
	{
		a = reverse[i];
		reverse[i] = reverse[j];
		reverse[j] = a;
	}
	puts(reverse);
}

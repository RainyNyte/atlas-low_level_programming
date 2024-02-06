#include "main.h"
#include <stdio.h>

/**
 *print_array- prints n digits of an arrary of integers
 *@a:the arrary to print from
 *@n:the number of values to print
 *
 *Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n",a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
}

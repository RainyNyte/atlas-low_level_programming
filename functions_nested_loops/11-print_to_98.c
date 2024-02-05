#include "main.h"
#include <stdio.h>

/**
 *print_to_98- prints all the natural numbers between n and 98, inclusive
 *@n: the value that the function will start from
 *
 *Return: 0
 */

int print_to_98(int n)
{
	int counter;

	if (n <= 98)
	{
		for (counter = n; counter <= 98; counter++)
		{
			if (counter == 98)
			{
				printf("%d\n", counter);
			}
			else
			{
				printf("%d, ", counter);
			}
		}
	}
	else
	{
		for (counter = n; counter >= 98; counter--)
		{
			if (counter == 98)
			{
				printf("%d\n", counter);
			}
			else
			{
				printf("%d, ", counter);
			}
		}
	}
	return (0);
}

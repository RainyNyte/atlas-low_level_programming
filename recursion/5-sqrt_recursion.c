#include "main.h"

/**
 *_sqrt_recursion- uses a recursive while loop to find the square root of
 *a number
 *@n: the number to find the square root of
 *
 *Return the square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		int i = 1;
		while (i * i <= n)
		{
			if (i * i == n)
			{
				return (i);
			}
			i++;
		}
		return (-1);
	}
}

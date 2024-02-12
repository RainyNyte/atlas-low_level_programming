#include "main.h"

/**
 *_sqrt_recursion- calls a helper function to calculate the sqrt of a number
 *@n: the number to find the square root of
 *
 *Return: square root of n
 */

int _sqrt_recursion(int n)
{
	return (helpy(n, 1));
}

/**
 *helpy- a helper function for _sqrt_recursion that does the main math
 *@x: the number that was passed to _sqrt_recursion
 *@y: the number we are checking to see if it's sqr and x are equal
 *
 *Return: y if it is the sqrt of n, -1 if the number has no sqrt
 */

int helpy(int x, int y)
{
	if (y * y == x)
	{
		return (y);
	}
	if (y * y > x)
	{
		return (-1);
	}
	else
	{
		return (helpy(x, y + 1));
	}
}

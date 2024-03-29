#include "main.h"

/**
 *_pow_recursion- calculates x to the power of y
 *@x: the base number
 *@y: the number that x is raised to the power of
 *
 *Return: x^y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (x == 0)
	{
		return (0);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}

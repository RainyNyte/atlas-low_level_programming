#include "main.h"

/**
 *print_triangle- prints a triangle of a given size using #
 *@l: the size of the triangle to print in characters
 *
 *Return:void
 */

void print_triangle(int rows)
{
	int i;
	int j;
	int k;

	if (rows > 0)
	{
		for (i = 0; i < rows; i++)
		{
			for (j = 0; j < 2 * (rows - i) - 1; j++)
			{
				_putchar(' ');
			}
			for (k = 0; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

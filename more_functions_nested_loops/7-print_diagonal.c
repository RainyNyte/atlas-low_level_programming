#include "main.h"

/**
 *print_diagonal- prints a diagonal line of a given length using slashes
 *@l: the length of the line to print in characters
 *
 *Return:void
 */

void print_diagonal(int l)
{
	int count;
	int offset;

	if ( l > 0)
	{
		for (count = 0; count < l; count++)
		{
			for (offset = 0; offset < l; offset++)
			{
				if (offset == count)
				{
					_putchar('\\');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

#include "main.h"

/**
 *print_line- prints a line of a given length using underscores
 *@l: the length of the line to print in characters
 *
 *Return:void
 */

void print_line(int l)
{
	int length;

	for (length = l; length >  0; length--)
	{
		_putchar('_');
	}
	_putchar('\n');
}

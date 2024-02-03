#include "main.h"

/**
 *print_alphabet_x10- prints the alphabet in lowercase followed by a new line 10x
 *
 *Return: 0
 */

void print_alphabet_x10(void)
{
	int a;
	int cycle;

	for (cycle = 0; cycle <= 9; cycle++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}

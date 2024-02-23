#include "function_pointers.h"
#include <stdio.h>

/**
 *print_name- calls a function pointer to print the name passed to it
 *@name: the name to print
 *@f: a pointer to the function that we want to call on the
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}

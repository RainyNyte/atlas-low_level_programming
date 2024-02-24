#include "function_pointers.h"

/**
 *array_iterator- iterates through an array and calls a function on each
 *element of the array
 *@array: the array to iterate through
 *@size: the size of the array
 *@action: a pointer to the function we wish to call on each
 *element of the array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

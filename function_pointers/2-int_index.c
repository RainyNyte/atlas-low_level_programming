#include "function_pointers.h"

/**
 *int_index- searches an array for an integer
 *@array: the array to be searched
 *@size: the size of the array
 *@cmp: pointer to the function to be used for the search opperation
 *
 *Return: pointer to the first element in the array that cmp doesn't return 0
 *if no element matches or size <= 0 then returns -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}

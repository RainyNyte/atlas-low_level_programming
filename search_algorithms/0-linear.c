#include "search_algos.h"

/**
 * linear_search- searches an array using the linear search method
 * @array: pointer to the first element of the array to search in
 * @size: size of the array
 * @value: the value to look for
 * 
 * Return: the index of value
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
		{
			return (i);
		}
	}
	return (-1);

}

#include "search_algos.h"

/**
 * print_array- prints an array or sub array for binary_search
 * @array: the array to print from
 * @left: the leftmost index to print
 * @right: the rightmost index to print
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
		printf(", ");
	}
	printf("\n");
}

/**
 * binary_search: searches an array for a value using the binary search algorithm
 * @array: the array to be searched
 * @size: the size of the array
 * @value: the value to search for
 *
 * Return: the index of value
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid;

	if (array == NULL)
	{
		return (-1);
	}
	while (left <= right)
	{
		print_array(array, left, right);
		mid = left + (right - left) / 2;
		if (value == array[mid])
		{
			return (mid);
		}
		else if (value < array[mid])
		{
			right = mid - 1;
		}
		else if (value > array[mid])
		{
			left = mid + 1;
		}
	}
	return (-1);
}

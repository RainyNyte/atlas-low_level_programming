#include "search_algos.h"

/**
 * binary_search - Search for a value in a sorted array using
 * binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: The index where value is located, or -1 if value is not
 * present or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	int i;
	int left = 0;
	int right = size - 1;
	int mid;

	if (array == NULL)
	{
		return (-1);
	}
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i != right)
			{
				printf(", ");
			}
		}
		printf("\n");
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return (-1);
}

#include "search_algos.h"

/**
 * min- determine the lower of two values for jump_search
 * @a: first value to compare
 * @b: second value to compare
 *
 * return: the smaller value
 */

size_t min(size_t a, size_t b)
{
	if (b>a)
	{
		return (a);
	}
	else
	{
		return (b);
	}
}
/**
 * jump_search- searches an array using the jump search algorithm
 * @array: the array to search
 * @size: the size of the array
 * @value: the value to search for
 *
 * Return: the index of value
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step;
	size_t prev;

	step = 1;
	prev = 0;
	while (array[min(step, size) - 1] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", min(step, size) - 1, array[min(step, size) - 1]);
		prev = step;
		step += sqrt(size);
		if (prev >= size)
		{
			return (-1);
		}
	}
	while (array[prev] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
		{
			return (prev);
		}
		prev++;
	}
	return (-1);
}

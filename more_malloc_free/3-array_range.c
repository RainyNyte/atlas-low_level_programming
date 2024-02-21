#include "main.h"
#include <stdlib.h>

/**
 *array_range- creates an array of integers containing all values between
 *min and max (inclusive), ordered from min to max
 *@min: minumum value in the array
 *@max: maximum value in the array
 *
 *Return: NULL if min > max or malloc fails, otherwise pointer to the new array
 */

int *array_range(int min, int max)
{
	int *range;
	int i;

	if (min > max)
	{
		return(NULL);
	}

	range = malloc(sizeof(int) * (max - min + 1));

	if (range == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= max; i++)
	{
		range[i] = min + i;
	}
	return (range);
}

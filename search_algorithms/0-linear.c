#include "search_algos.h"

int linear_search(int *array, size_t size, int value) 
{
    // Check if the array is NULL
	if (array == NULL) 
	{
        	return (-1);
	}

    // Iterate through the array
	for (size_t i = 0; i < size; ++i) 
	{
        // Print the value being compared
       		printf("Comparing %d\n", array[i]);
        
        // If the current element equals the value, return its index
        	if (array[i] == value) 
		{
			return (i);
        	}
	}

    // If the value is not found, return -1
	return (-1);
}
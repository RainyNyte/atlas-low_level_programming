#include <stdio.h>
#include <stdlib.h>

hash_table_t *hash_table_create(unsigned long int size) {
	hash_table_t *table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (table == NULL) 
	{
        	return NULL;
	}

	table->size = size;
	table->array = (hash_node_t **)malloc(size * sizeof(hash_node_t *));
	if (table->array == NULL)
	{
        	free(table);
        	return NULL;
	}

    // Initialize all array elements to NULL
	for (unsigned long int i = 0; i < size; ++i) 
	{
        	table->array[i] = NULL;
	}

	return table;
}
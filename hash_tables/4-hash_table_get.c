#include "hash_tables.h"

/**
 * hash_table_get- gets a value from the table using a key
 * @ht: the table to get the value from
 * @key: the key to use to find the value
 * 
 * Return: the value at the designated key or NULL if no value found or an error occurs
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *current = ht->array[index];

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}

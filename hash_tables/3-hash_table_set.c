#include "hash_tables.h"

/**
 * hash_table_set- assigns values to indexes in the hash table created using hash_table_create
 * @ht: the table we created with hash_table_create
 * @key: the key we want to use to find an index
 * @value: the value we want to assign to the index that the key returns
 * 
 * Return: 1 on success 0 on error
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *new_node = malloc(sizeof(hash_node_t));
	hash_node_t *current = ht->array[index];

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);

	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);

	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	new_node->next = NULL;

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(new_node->key);
			free(new_node->value);
			free(new_node);
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}

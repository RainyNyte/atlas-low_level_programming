#include "lists.h"

/**
 *insert_nodeint_at_index- inserts a new node at the given position
 *@head: first node of the list
 *@idx: index of the list where the new node should be added
 *@n: value to assign to the new node
 *
 *Return: adress of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *drifter = *head;
	listint_t *new_node;

	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
		{
			return (NULL);
		}
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; drifter != NULL && i < idx - 1; i++)
	{
		drifter = drifter->next;
	}

	if (drifter == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = drifter->next;
	drifter->next = new_node;

	return (new_node);
}

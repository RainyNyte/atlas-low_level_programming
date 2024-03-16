#include "lists.h"

/**
 *dlistint_len- counts the number of elements in a dlistint_t list
 *@h: the start of the list to count
 *
 *Return: the number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;
	const dlistint_t *traveller = h;

	while (traveller != NULL)
	{
		n++;
		traveller = traveller->next;
	}
	return (n);
}

/**
 *insert_dnodeint_at_index- inserts a new node at the given position
 *@h: first node of the list
 *@idx: index of the list where the new node should be added
 *@n: value to assign to the new node
 *
 *Return: adress of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *drifter = *h;
	dlistint_t *new_node;

	if (*h == NULL || idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	if (idx == dlistint_len(*h))
	{
		return (add_dnodeint_end(h, n));
	}

	for (i = 0; drifter != NULL && i < idx - 1; i++)
	{
		drifter = drifter->next;
	}

	if (drifter == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = drifter;
	new_node->next = drifter->next;
	if (drifter->next != NULL)
	{
		drifter->next->prev = new_node;
	}
	drifter->next = new_node;

	return (new_node);
}

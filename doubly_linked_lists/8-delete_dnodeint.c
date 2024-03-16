#include "lists.h"

/**
 *delete_dnodeint_at_index- deletes node at specified index
 *@head: start of the list to edit
 *@index: index of the node we wish to delete
 *
 *Return: 1 on success, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *drifter = *head;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(drifter);
		return (1);
	}

	for (i = 0; drifter != NULL && i < index - 1; i++)
	{
		drifter = drifter->next;
	}

	if (drifter == NULL || drifter->next == NULL)
	{
		return (-1);
	}
	drifter->prev->next = drifter->next;
	if (drifter->next != NULL)
	{
		drifter->next->prev = drifter->prev;
	}
	free(drifter);
	return (1);
}

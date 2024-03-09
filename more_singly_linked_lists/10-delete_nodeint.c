#include "lists.h"

/**
 *delete_nodeint_at_index- deletes node at specified index
 *@head: start of the list to edit
 *@index: index of the node we wish to delete
 *
 *Return: 1 on success, -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *drifter = *head;
	listint_t *fading;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
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
	fading = drifter->next;
	drifter->next = fading->next;
	free(fading);
	return (1);
}

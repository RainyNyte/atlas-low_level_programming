#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *get_nodeint_at_index- locates the node at a specified index in the list
 *@head: the starting node in the list
 *@index: the index of the node we want to locate
 *
 *Return: the node at the specified index, or NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *drifter = head;

	for (i = 0; drifter != NULL && i < index; i++)
	{
		drifter = drifter->next;
	}
	return(drifter);
}

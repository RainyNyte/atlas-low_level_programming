#include <stdlib.h>
#include "lists.h"

/**
 *free_dlistint- frees a linked dlistint_t list
 *@head: the first element of the list you wish to free
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *traveller;

	while (head != NULL)
	{
		traveller = head;
		head = head->next;
		free(traveller);
	}
}

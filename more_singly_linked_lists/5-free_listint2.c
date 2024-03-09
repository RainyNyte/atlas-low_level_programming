#include <stdlib.h>
#include "lists.h"

/**
 *free_listint- frees a linked listint_t list
 *@head: the first element of the list you wish to free
 */

void free_listint2(listint_t **head)
{
	listint_t *traveller;

	while (*head != NULL)
	{
		traveller = *head;
		*head = (*head)->next;
		free(traveller);
	}
}

#include <stdlib.h>
#include "lists.h"

/**
 *free_list- frees a linked list_t list
 *@head: the first element of the list you wish to free
 */

void free_list(list_t *head)
{
	list_t *traveller;
	
	while (head != NULL)
	{
		traveller = head;
		head = head->next;
		free(traveller->str);
		free(traveller);
	}
}

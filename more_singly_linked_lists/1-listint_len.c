#include <stdlib.h>
#include  "lists.h"

/**
 *listint_len- counts the number of elements in a listint_t list
 *@h: the start of the list to count
 *
 *Return: the number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;
	const listint_t *traveller = h;

	while (traveller != NULL)
	{
		n++;
		traveller = traveller->next;
	}
	return (n);
}

#include  "lists.h"

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

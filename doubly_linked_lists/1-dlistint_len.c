#include "lists.h"

/**
 *dlistint_len - determine the number of nodes in a doubly linked list
 *@h: pointer to the head of the list we are evaluating
 *
 *Return: length of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;
	const listint_t *drifter = h;

	while (drifter != NULL)
	{
		n++;
		drifter = drifter->next;
	}
	return (n);
}

#include "lists.h"

/**
 *sum_dlistint- adds all the values in a dlistint_t list
 *@head: the start of the list to calculate the sum of
 *
 *Return: sum of all the list value
 */

int sum_dlistint(dlistint_t *head)
{
	int n = 0;
	dlistint_t *drifter = head;

	while (drifter != NULL)
	{
		n += drifter->n;
		drifter = drifter->next;
	}
	return (n);
}

#include "lists.h"

/**
 *sum_listint- adds all the values in a listint_t list
 *@head: the start of the list to calculate the sum of
 *
 *Return: sum of all the list value
 */

int sum_listint(listint_t *head)
{
	int n = 0;
	listint_t *drifter = head;

	while (drifter != NULL)
	{
		n += drifter->n;
		drifter = drifter->next;
	}
	return (n);
}

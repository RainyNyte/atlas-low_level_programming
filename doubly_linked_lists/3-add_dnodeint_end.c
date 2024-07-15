#include "lists.h"

/**
 * add_dnodeint_end - add node to the end of a doubly linked list
 * @head: head of the list to append node too
 * @n: value to add to the list
 *
 * Return: adress of the new node
 */


dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *drifter = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}
	else
	{
		new_node->n = n;
		new_node->next = NULL;
		if (*head == NULL)
		{
			*head = new_node;
		}
		else
		{
			while (drifter != NULL && drifter->next != NULL)
			{
				drifter = drifter->next;
			}
			drifter->next = new_node;
			new_node->prev = drifter;
		}
		return (new_node);
	}
}

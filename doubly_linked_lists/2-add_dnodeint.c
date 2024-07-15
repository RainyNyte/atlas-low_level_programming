#include "lists.h"

/**
 * add_dnodeint - add node to a doubly linked list
 * @head: pointer to the head of the list
 * @n: value to add to the list
 *
 * Return: adress of the new node, or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	else
	{
		new_node->n = n;
		new_node->prev = NULL;
	}
	if(*head == NULL)
	{
		new_node->next = NULL;
	}
	else
	{
		new_node->next = *head;
		(*head)->prev = new_node;
		*head = new_node;
	}
	return (new_node);
}

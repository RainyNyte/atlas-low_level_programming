#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 *add_dnodeint- adds a node to the beginning of a listint_t list
 *@head: the original starting node of the list
 *@n: the int to be assigned to the n value of the new node
 *
 *Return: adress of the new node or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	else
	{
		new_node->n = n;
		new_node->next = *head;
		new_node->prev = NULL;
		if (*head != NULL)
		{
			(*head)->prev = new_node;
		}
		*head = new_node;
		return (new_node);
	}
}

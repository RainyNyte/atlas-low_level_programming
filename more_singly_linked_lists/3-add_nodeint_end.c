#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 *add_nodeint_end- adds a node to the end  of a listint_t list
 *@head: the starting node of the list
 *@n: int to be assigned to the n value of the new neode
 *
 *Return: adress of the new node or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *traveller = *head;

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
			while (traveller != NULL && traveller->next != NULL)
			{
				traveller = traveller->next;
			}
			traveller->next = new_node;
		}
		return (new_node);
	}
}

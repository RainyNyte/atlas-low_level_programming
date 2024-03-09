#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 *_strlen- finds the length of a string
 *@s: pointer to the string that we are finding the length of
 *
 *Return: the length of the string located at *s
 */

int _strlen(const char *s)
{
	int len = 0;
	int i = 0;

	if (s != NULL)
	{
		while (s[i] != '\0')
		{
			len++;
			i++;
		}
	}
	return (len);
}

/**
 *add_node_end- adds a node to the end  of a list_t list
 *@head: the starting node of the list
 *@str: the data to assign the str variable in the list_t struct
 *
 *Return: adress of the new node or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *traveller = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}
	else
	{
		new_node->str = strdup(str);
		new_node->len = _strlen(str);
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

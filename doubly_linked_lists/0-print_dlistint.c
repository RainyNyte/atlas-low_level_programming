#include "lists.h"

/**
 * print_dlistint - prints a doubly linked list
 * @h: pointer to the head of the list we are printing
 * 
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nd = 0;
	const list_t *printer_in = h;

	while (printer_in != NULL)
	{
		if (printer_in->n == NULL)
		{
			printf("[0] (nil)\n");
			printer_in = printer_in->next;
			nd++;
		}
		else
		{
			printf("%d\n", printer_in->n);
			printer_in = printer_in->next;
			nd++;
		}
	}
	return (nd);
}

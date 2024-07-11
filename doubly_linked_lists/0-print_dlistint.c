#include "lists.h"

/**
 *print_dlistint - prints a doubly linked list
 *@h: pointer to the head of the list we are printing
 *
 *Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;
	const dlistint_t *printer_in = h;

	while (printer_in != NULL)
	{
		printf("%d\n", printer_in->n);
		printer_in = printer_in->next;
		n++;
	}
	return (n);
}

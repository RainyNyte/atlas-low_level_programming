#include "lists.h"

/**
*print_dlistint- prints the contents of each dlistint_t element in a list
*followed by new line
*@h:the first element in the list you wish to print
*
*Return: the number of elements in the list
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

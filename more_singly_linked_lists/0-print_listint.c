#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
*print_listint- prints the contents of each listint_t element in a list
*followed by new line
*@h:the first element in the list you wish to print
*
*Return: then number of elements in the list
*/

size_t print_listint(const listint_t *h)
{
	size_t n = 0;
	const listint_t *printer_in = h;

	while (printer_in != NULL)
	{
		printf("%d\n", printer_in->n);
		printer_in = printer_in->next;
		n++;
	}
	return (n);
}

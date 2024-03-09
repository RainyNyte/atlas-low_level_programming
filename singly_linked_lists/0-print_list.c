#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *print_list- prints the contents of each list_t element in a list, followed by
 *new line
 *@h:the first element in the list you wish to print
 *
 *Return: then number of elements in the list
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;
	const list_t *printer_in = h;

	while (printer_in != NULL)
	{
		if(printer_in->str == NULL)
		{
			printf("[0] (nil)\n");
			printer_in = printer_in->next;
			n++;
		}
		else
		{
			printf("[%d] %s\n", printer_in->len, printer_in->str);
			printer_in = printer_in->next;
			n++;
		}
	}
	return(n);
}

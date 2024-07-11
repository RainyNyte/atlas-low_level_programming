#IFNDEF
#DEFINE
#INCLUDE <stdlib.h>
#INCLUDE <string.h>
#INCLUDE <stdio.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: pointer to previous node
 * @next: pointer to next node
 * 
 * Description: doubly linked list node structure
 */

typdef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);

#ENDIF
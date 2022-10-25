#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a linked list
 * @h: head of the list
 *
 * Return: The number of nodes 
 */
size_t print_listint(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
		
	}
	
	return (nodes);
}

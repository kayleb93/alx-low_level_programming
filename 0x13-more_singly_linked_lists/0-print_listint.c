#include "lists.h"

/**
 * print_listint - Prints all the elements of a linked list
 * @h: head of the list
 *
 * Return: The number of nodes 
 */
size_t print_listint(const listint_t *h);
{
	size_t mnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		mnodes++;
	}
	return (mnodes);
}

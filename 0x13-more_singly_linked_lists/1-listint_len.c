#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of nodes in 
 * a linked list.
 * @h: head of the list.
 *
 * Return: The number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	
	return (nodes);
}

#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - Adds a new node at the beginning
 * 		 of a listint_t list.
 * @h: A pointer to the address of the
 * 	  head of the listint_t list.
 *
 * Return: The number of elements in the listint_t list.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}

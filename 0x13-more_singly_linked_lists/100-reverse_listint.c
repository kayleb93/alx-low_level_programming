#include "lists.h"

/**
 * reverse_listint - Reverse a linked list.
 * @head: head of a list.
 * 
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *head, *behind;
	
	if (head == NULL || *head == NULL)
		return (NULL);

	behind = NULL;

	while ((*head)->next != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = behind;
		behind = *head;
		*head = ahead;
	}

	(*head)->next = behind;

	return (*head);
}

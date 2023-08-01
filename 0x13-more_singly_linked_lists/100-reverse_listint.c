#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: pointers to the first node in the list
 *
 * Return: 0
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}


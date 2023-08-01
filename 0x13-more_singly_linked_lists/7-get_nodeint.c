
#include "lists.h"

/**
 * get_nodeint_at_index - returns node at point x
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: 0
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *temp = head;

	while (temp && j < index)
	{
		temp = temp->next;
		j++;
	}

	return (temp ? temp : NULL);
}


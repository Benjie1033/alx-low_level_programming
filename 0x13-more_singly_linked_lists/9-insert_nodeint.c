#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointers to the first node in the list
 * @idx: index where the new node is at
 * @n: data to insert in the new_node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int z;
	listint_t *new_node;
	listint_t *temp = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (z = 0; temp && z < idx; z++)
	{
		if (z == idx - 1)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}


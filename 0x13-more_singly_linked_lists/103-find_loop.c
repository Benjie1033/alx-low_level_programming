#include "lists.h"

/**
 * find_listint_loop - finds the loop in the linked list
 * @head: linked list to be searched for
 *
 * Return: the address of the node where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *li1 = head;
	listint_t *li2 = head;

	if (!head)
		return (NULL);

	while (li1 && li2 && li2->next)
	{
		li2 = li2->next->next;
		li1 = li1->next;
		if (li2 == li1)
		{
			li1 = head;
			while (li1 != li2)
			{
				li1 = li1->next;
				li2 = li2->next;
			}
			return (li2);
		}
	}

	return (NULL);
}

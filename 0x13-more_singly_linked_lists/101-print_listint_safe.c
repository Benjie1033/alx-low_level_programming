# include "lists.h"

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * in linked list
 * @head: A pointer to head of the listint_t to check.
 *
 * Return:  0.
 * Otherwise - the number of unique nodes in the list.
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *fast, *slow;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	fast = head->next;
	slow = (head->next)->next;

	while (slow)
	{
		if (fast == slow)
		{
			fast = head;
			while (fast != slow)
			{
				node++;
				fast = fast->next;
				slow = slow->next;
			}

			fast = fast->next;
			while (fast != slow)
			{
				node++;
				fast = fast->next;
			}

			return (node);
		}

		fast = fast->next;
		slow = (slow->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the list.
 *
 * Return: 0
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, i = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (i = 0; i < nodes; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}


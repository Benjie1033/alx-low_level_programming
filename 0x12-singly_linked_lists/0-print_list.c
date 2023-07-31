# include "lists.h"
# include <stdio.h>

/**
 * print_list - prints the elements of linked list
 * @h: point to list_t
 *
 * Return: no of nodes printed
 */

size_t print_list(const list_t *h)
{
size_t l = 0;

while (h)
{
if (!h->str)
	printf("[0] (nil)\n");

else
{
	printf("[%u]%s\n", h->len, h->str);
	h = h->next;
	l++;
}
}
return (l);

}

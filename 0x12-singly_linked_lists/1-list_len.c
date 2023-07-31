# include "lists.h"
# include <stdlib.h>

/**
 * list_len - returns number of elements in a linked list
 * @h: pointer ot our list
 *
 * Return 0
 */

size_t list_len(const list_t *h)
{
size_t k = 0;

while (h)
{
k++;
h = h->next;
}
return (k);
}

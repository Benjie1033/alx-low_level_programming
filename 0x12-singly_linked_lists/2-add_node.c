# include <stdlib.h>
# include "lists.h"
# include <string.h>

/**
 * add_node - add new node at the beginning
 * @head: points to start of node
 * @str: str to add to node
 *
 * Return: 0
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *n;
unsigned int len = 0;

while (str[len])
	len++;

n = malloc(sizeof(list_t));
if (!n)
	return (NULL);

n->str = strdup(str);
n->len = len;
n->next = (*head);
(*head) = n;

return (*head);
}

#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head:pointer to the list
 * @idx: the index of the node
 * @n: node's data
 *
 *Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *cursor = *head;
listint_t *new;
size_t count = 0;
listint_t *tmp;

new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}

new->n = n;
new->next = NULL;

if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}

while (cursor != NULL)
{
if (count == (idx - 1))
{
tmp = cursor->next;
cursor->next = new;
new->next = tmp;
break;
}
cursor = cursor->next;
count += 1;
}

return (new);
}

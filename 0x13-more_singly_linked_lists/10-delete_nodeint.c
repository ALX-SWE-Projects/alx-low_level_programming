#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 *
 * @head:pointer to the list
 * @index: the index of the node
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *cursor = *head;
listint_t *tmp;
size_t count = 0;

if (*head == NULL)
{
return (-1);
}

if (index == 0)
{
tmp = *head;
*head = (*head)->next;
free(tmp);
return (1);
}

while (cursor != NULL)
{
if (count == (index - 1))
{
if (cursor->next == NULL)
{
return (-1);
}
tmp = cursor->next;
cursor->next = tmp->next;
free(tmp);
return (1);
}
cursor = cursor->next;
count += 1;
}

return (1);
}

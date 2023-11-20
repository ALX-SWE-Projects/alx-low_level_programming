#include "lists.h"

/**
 * get_nodeint_at_index - finds the nth node of a listint_t linked list
 *
 * @head: pointer to the list
 * @index: the index of the node, starting at 0
 *
 *Return: returns the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *cursor = head;
size_t count = 0;

while (cursor != NULL && count != index)
{
cursor = cursor->next;
count += 1;
}

return (cursor);
}

#include "lists.h"

/**
 * listint_len - returns the number of elements
 *
 * @h:pointer to the list
 *
 *Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
const listint_t *cursor = h;
size_t count = 0;

while (cursor != NULL)
{
cursor = cursor->next;
count += 1;
}

return (count);
}

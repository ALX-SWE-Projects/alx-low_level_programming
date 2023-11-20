#include "lists.h"

/**
 * print_listint -  prints all the elements of a listint_t list
 *
 * @h:pointer to the list
 *
 *Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
const listint_t *cursor = h;
size_t count = 0;

while (cursor != NULL)
{
printf("%d\n", cursor->n);
cursor = cursor->next;
count += 1;
}

return (count);
}

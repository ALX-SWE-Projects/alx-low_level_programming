#include "lists.h"

/**
 * sum_listint - sums all the data(n) of the list
 *
 * @head:pointer to the list
 *
 *Return: returns the sum
 */
int sum_listint(listint_t *head)
{
const listint_t *cursor = head;
size_t sum = 0;

if (head == NULL)
{
return (0);
}

while (cursor != NULL)
{
sum += cursor->n;
cursor = cursor->next;
}

return (sum);
}

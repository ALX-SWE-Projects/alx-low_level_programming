#include "lists.h"

/**
 * pop_listint - deletes the head node
 *
 * @head:pointer to the list
 *
 *Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
int data;
listint_t *temp = *head;

if (*head == NULL)
{
return (0);
}

data = (*head)->n;
*head = (*head)->next;

free(temp);

return (data);
}

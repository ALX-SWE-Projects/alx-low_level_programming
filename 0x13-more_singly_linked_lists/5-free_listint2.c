#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 *
 * @head:pointer to the list
 */
void free_listint2(listint_t **head)
{
listint_t *tmp;

while (*head)
{
tmp = (*head)->next;
free(*head);
*head = tmp;
}
*head = NULL;
}

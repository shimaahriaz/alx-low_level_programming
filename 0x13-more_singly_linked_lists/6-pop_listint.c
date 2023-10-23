#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: A pointer to the address of the head of the listint_t list.
 *
 * Return: The data (n) of the head node, or 0 if the linked list is empty.
 */
int pop_listint(listint_t **head)
{
int data = 0;
listint_t *current;
if (*head != NULL)
{
current = *head;
data = current->n;
*head = (*head)->next;
free(current);
}
return data;
}

#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in the list.
 * @head: A pointer to the address of the head of the list.
 * @idx: The index where the new node should be added. Index starts at 0.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node = NULL;
listint_t *temp = *head;
unsigned int i = 0;
if (idx == 0)
{
new_node = add_nodeint(head, n);
return (new_node);
}
while (temp && i < idx - 1)
{
temp = temp->next;
i++;
}
if (temp == NULL)
return (NULL);
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = temp->next;
temp->next = new_node;
return (new_node);
}

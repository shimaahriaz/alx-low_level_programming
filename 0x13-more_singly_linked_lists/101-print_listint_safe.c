#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list and handles loops.
 * @head: Pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
size_t nodes = 0;
const listint_t *current = head;
const listint_t *loop_start = NULL;
while (current)
{
nodes++;
printf("[%p] %d\n", (void *)current, current->n);
if (current > current->next || current > loop_start)
{
current = current->next;
}
else
{
loop_start = current;
current = current->next;
}
if (current == loop_start)
{
printf("-> [%p] %d\n", (void *)current, current->n);
exit(98);
}
}
return (nodes);
}

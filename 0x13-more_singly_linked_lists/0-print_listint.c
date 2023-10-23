#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: A pointer to the head of the linked list.
 *
 * Description:
 * This function traverses a linked list and prints the integer value of each
 * element, one element per line, followed by a newline.
 *
 * Return: The number of nodes in the linked list.
 */


size_t print_listint(const listint_t *h)
{
size_t count = 0;
const listint_t *current = h;
do
{
printf("%d\n", current->n);
count++;
current = current->next;
} while (current != NULL);
return (count);
}

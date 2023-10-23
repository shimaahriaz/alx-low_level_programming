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
size_t print_listint_recursive_ternary(const listint_t *h)
{
return (h
? (printf("%d\n", h->n), 1 + print_listint_recursive_ternary(h->next))
: 0);
}

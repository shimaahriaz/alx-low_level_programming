#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: a pointer to a pointer to the first node in the list
 * @str: the string to be duplicated and added to the new node
 *
 * Return: address of the new element or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node, *current;

    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
    {
        return (NULL);
    }

    new_node->str = strdup(str);
    if (new_node->str == NULL)
    {
        free(new_node);
        return (NULL);
    }

    new_node->len = strlen(str);
    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
        return (new_node);
    }

    current = *head;
    while (current->next != NULL)
    {
        current = current->next;
    }

    current->next = new_node;

    return (new_node);
}


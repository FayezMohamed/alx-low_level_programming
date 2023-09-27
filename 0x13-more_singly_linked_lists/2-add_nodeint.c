#include "lists.h"
/**
 * add_nodeint - adds a node at the beginning of a linked list
 * @head: first node
 * @n: new node
 * Return: new node or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new;

    new = malloc(sizeof(listint_t));
    if (new == NULL)
        return (NULL);

    new->n = n;
    new->next = *head;
    *head = new;

    return (new);
}

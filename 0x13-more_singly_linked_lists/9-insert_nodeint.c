#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: first node
 * @idx: index of the list where the new node should be added
 * @n: integer
 *
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *current, *previous;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (head == NULL)
	{
		return (NULL);
	}
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	current = *head;
	previous = NULL;
	while (current != NULL && i < idx)
	{
		previous = current;
		current = current->next;
		i++;
	}

	if (i < idx)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current;
	previous->next = new_node;

	return (new_node);
}

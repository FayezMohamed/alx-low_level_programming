#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a specific position
 * @head: first node
 * @index: index of the node to delete
 * Returns: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *value = NULL;
	unsigned int i = 0;

	if (*head == NULL)
    		return (-1);

	if (index == 0)
	{
    		*head = (*head)->next;
    		free(current);
    		return (1);
	}

	while (i < index - 1)
	{
    		if (!current || !(current->next))
        		return (-1);
    		current = current->next;
    		i++;
	}

	value = current->next;
	current->next = value->next;
}

#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: linked list
 */
void free_listint(listint_t *head)
{
	listint_t *current'
	while (head)
	{
		current = head->next;
		free(head);
		head = current;
	}

}


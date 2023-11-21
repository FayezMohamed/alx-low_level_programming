#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: first node
 * @n: new node's desired value
 *
 * Return: new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last = *head;

	listint_t *new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new_node;
	}
	return (new_node);
}

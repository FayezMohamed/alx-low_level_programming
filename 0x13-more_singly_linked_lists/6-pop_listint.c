#include "lists.h"
/**
 * pop_listint - deletes the head node of a list
 * @head: first node
 *
 * Return: the head node's value(n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int value;

	if (*head == NULL)
	{
		return (0);
	}
	*head = (*head)->next;
	value = temp->n;
	free(temp);

	return(value);
}

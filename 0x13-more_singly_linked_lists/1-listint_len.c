#include "lists.h"
/**
 * listint_len - returns the number of elements in the list
 * @h: linked list
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int length = 0;

	while (h != NULL)
	{
		length++;
		h = h->next;
	}
	return (length);
}

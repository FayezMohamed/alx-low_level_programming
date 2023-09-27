#include "lists.h"
/**
 * listint_t - returns number of elements in a list
 * @h: linked list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}

	return (num);
}

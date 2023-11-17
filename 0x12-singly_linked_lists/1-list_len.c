#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns number of elements in a list
 * @h: list
 */
size_t list_len(const list_t *h)
{
	const list_t *temp;
	unsigned int n = 0;
	temp = h;

	while (temp)
	{
		n++;
		temp = temp->next;
	}
	return (n);
}

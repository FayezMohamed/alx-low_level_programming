#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	unsigned int total_size, i;
	char *temp = (char *)arr;

	arr = malloc(nmemb * size);
	if (nmemb == 0 || size == 0)
        {
                return (NULL);
        }
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < total_size; i++)
	{
		temp[i] = 0;
	}
	return (arr);
}

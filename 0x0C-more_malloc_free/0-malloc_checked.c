#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: integer
 *
 * Return: pointer to allocated memory or 98 if fails
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}

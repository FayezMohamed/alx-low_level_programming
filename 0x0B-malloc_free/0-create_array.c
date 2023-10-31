#include "main.h"
#include <stdlib.h>

/**
 * char *create_array(unsigned int size, char c) - creates an array of chars
 * @size: size of array
 * @c: array created
 *
 * Return: created array, NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	s = malloc(size * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}

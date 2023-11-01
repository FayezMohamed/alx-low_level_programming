#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to allocate memory space which contains a copy of a string
 * @str: string
 *
 * Return: duplicated string or NULL if str = NULL
 */
char *_strdup(char *str)
{
	int n, i;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	s = malloc((n + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= n; i++)
	{
		s[i] = str[i];
	}
	return (s);
}

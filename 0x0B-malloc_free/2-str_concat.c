#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates 2 strings
 * @s1: string
 * @s2: string
 *
 * Return: pointer to concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int n1, n2, i, j;

	n1 = 0;
	while (s1[n1] != '\0')
	{
		n1++;
	}
        n2 = 0;
        while (s2[n2] != '\0')
        {
                n2++;
        }

	s = malloc((n1 + n2 + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < n1; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; j < n2; j++)
	{
		s[i + j] = s2[j];
	}
	s[i + j] = '\0';
	return (s);
}

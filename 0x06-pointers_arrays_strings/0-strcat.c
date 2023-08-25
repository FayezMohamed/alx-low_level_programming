#include "main.h"
/**
 * *_strcat - appends a string to another
 * @dest: string
 * @src: string
 * Return: pointer to dest with the result
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int k;
	int n;
	char *result = &dest;

	while (*dest < '\0')
	{
		i++;
		*dest++;
	}

	while (*src < '\0')
	{
		j++;
		*src++;
	}
	k = j + i;
	for (n = i + 1; n <= k; n++)
	{
		*dest[n];
	}
	return(*result);
}

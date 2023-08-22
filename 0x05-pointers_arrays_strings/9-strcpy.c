#include "main.h"
/**
 * _strcpy - copies a string
 * @src: string's pointer
 * @dest: returned value's pointer
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for ( ; j < l ; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}


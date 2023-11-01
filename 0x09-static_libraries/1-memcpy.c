#include "main.h"
/**
 * *_memcpy - copies memory area
 * @dest: array
 * @src: array
 * @n: n bytes from src
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}

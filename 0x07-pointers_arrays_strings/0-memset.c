#include "main.h"
/**
 * *_memset - fills memory with a constant byte
 * @s: array
 * @n: array size in bytes
 * @b: the byte thats going to be filled with
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

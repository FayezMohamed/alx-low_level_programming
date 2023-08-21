#include "main.h"
/**
 * int_strlen - returns length of string
 * @s: string
 */
int _strlen(char *s)
{
	int n = 0;

	while (*s != '\0')
	{
		n++;
	}

	return (n);
}

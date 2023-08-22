#include "main.h"
/**
 * puts2 - prints every charater in a string
 * @str: string
 */
void puts2(char *str)
{
	int i;
	int j;
	int length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}
	j = length -1;

	for (i = 0; i < j; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}


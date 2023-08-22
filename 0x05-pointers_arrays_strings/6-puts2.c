#include "main.h"
/**
 * puts2 - prints every charater in a string
 * @str: string
 */
void puts2(char *str)
{
	int i;
	int j = 0;
	int length = 0;
	char *y = str;

	while (*y != '\0')
	{
		length++;
		y++;
	}
	j = length - 1;

	for (i = 0; i <= j; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}


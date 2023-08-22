#include "main.h"
/**
 * puts_half - prints half a string
 * @str: string
 */
void puts_half(char *str)
{
	char *y = str;
	int length = 0;
	int half;
	int i = 0;
	int n;

	while (*y != '\0')
	{
		length++;
		y++;
	}
	half = (length / 2);
	n = (length - 1) / 2;

	if ((half % 2) == 0)
	{
		for (i = half; i <= length; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = n; i <= length; i++)
		{
			_putchar(str[i]);
		}
	}
}

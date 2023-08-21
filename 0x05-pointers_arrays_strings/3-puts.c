#include "main.h"
/**
 * _puts - prints a string to stout
 * @str: string
 */
void _puts(char *str)
{
	int i;

	while (*str != '\0')
	{
		_putchar(*str[i]);
		i++;
		str++;
	}
	_putchar('\n');
}

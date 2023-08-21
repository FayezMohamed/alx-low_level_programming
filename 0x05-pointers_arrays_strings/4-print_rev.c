#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int n = 0;
	int m;
	while (*s != '\0')
	{
		n++;
		s++;
	}
	s--;
	for (m = n; m > 0; m--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

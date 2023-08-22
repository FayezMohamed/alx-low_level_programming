#include "main.h"
/**
 * puts2 - prints every charater in a string
 * @str: string
 */
void puts2(char *str)
{
	int i;
    	int length = 0;

    	while (*str != '\0')
    	{
        	length++;
        	str++;
    	}

    	for (i = 0; i < length; i++)
    	{
		if (i % 2 == 0)
		{
        	_putchar(str[i]);
		}
    	}
	_putchar('\n')
}


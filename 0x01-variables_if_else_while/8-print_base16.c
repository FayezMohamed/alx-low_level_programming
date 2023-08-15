#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char base = "0123456789ABCDEF";
	int i;

	for (i = 0; i < 16; i++)
	{
		puthcar(base[i]);
	}
	putchar('\n');
	return (0);
}


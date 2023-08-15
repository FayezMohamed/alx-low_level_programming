#include <stdio.h>

/**
 * main - Prints numbers from 0 to 9.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char revAlphabet[] = "zyxwvutsrqponmlkjihgfedcba";
	int i;

	for (i = 0; i < 26 ; i++)
	{
		putchar(revAlphabet[i]);
	}
	putchar('\n');
	return (0);
}


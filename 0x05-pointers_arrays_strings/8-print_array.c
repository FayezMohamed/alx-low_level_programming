#include "main.h"
/**
 * print_array - prints an array
 * @a: array
 * @n: number of elements
 */
void print_array(int *a, int n)
{
	int i;
	int *y = a;
	
	n = 0;
	while (*y != '\0')
	{
		n++;
		y++;
	}
	for (i = 0; i <= n; i++)
	{
		printf("%d, ", a[i]);
	}
}

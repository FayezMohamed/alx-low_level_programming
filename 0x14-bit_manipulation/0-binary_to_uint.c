#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string (0/1)
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i, count = 0;
	unsigned int sum = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[count] != '\0')
	{
		if (b[count] != '0' && b[count] != '1')
		{
			return (0);
		}
		count++;
	}
	for (i = 0; i < count; i++)
	{
		sum = sum * 2 + (b[i] - '0');
	}
	return (sum);
}

#include "variadic_functions.h"

/**
 * sum_them_all - calculate sum of all its parameters
 * @n: number of arguments
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list ap;

	if (n == NULL)
	{
		return (0);
	}
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int)
	}
	va_end(ap);
	return (sum);
}

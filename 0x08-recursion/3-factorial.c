#include "main.h"
/**
 * factorial - calculates factorial of a number
 * @n: integer
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	return (n * factorial(n - 1));
}

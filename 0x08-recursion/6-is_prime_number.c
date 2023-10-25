#include "main.h"
/**
 * is_prime_number - checks whether number is prime
 * @n: integer
 *
 * Return: 1 if prime 0 if not
 */

int sumDigits(int n)
{
	if (n == 0)
	{
		return 0;
	}
	return (n % 10) + sumDigits(n / 10);
}
int is_prime_number(int n)
{
	if (n == 2 || n == 3)
	{
		return 1;
	}

	if (sumDigits(n) % 3 == 0)
	{
		return 1;
	}
	
	else
	{
		return 0;
	}

}

#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator:  string to be printed between numbers
 * n: number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (n == 0)
	{
		printf("\n");
	}
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
        printf("\n");
	va_end(ap);
}

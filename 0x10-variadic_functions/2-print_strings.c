#include "variadic_functions.h"

/**
 * print_strings- prints strings, followed by a new line
 * @separator:  string to be printed between numbers
 * n: number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
        va_list ap;
        unsigned int i;
	const char *str;

        if (n == 0)
        {
                printf("\n");
        }
        va_start(ap, n);
        for (i = 0; i < n; i++)
        {
		str = va_arg(ap, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
        }
        printf("\n");
        va_end(ap);
}

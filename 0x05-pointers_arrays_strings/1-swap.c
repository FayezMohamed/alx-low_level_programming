# include "main.h"

/** 
 * swap_int- swaps the values of 2 numbers
 * @a: inputs
 * @b: inputs
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}

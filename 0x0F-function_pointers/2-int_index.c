#include "function_pointers.h"

/**
 * int_index - returns the index of the first element
 * @array: array
 * @size: size of the array
 * @cmp: function pointer that compares values
 *
 * Return: -1 if no element matches or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
			i++;
		}
	}
	return (-1);
}

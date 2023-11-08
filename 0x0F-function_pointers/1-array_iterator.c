#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function executed on each element of array
 * @array: array
 * @size: size of array
 * @action: function pointer
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	
	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

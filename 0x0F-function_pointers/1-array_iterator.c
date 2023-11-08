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
	int *end = array + size - 1;
	
	if (array && size && action)
	{
		while (array <= end)
		{
			action(*array++);
		}
	}
}

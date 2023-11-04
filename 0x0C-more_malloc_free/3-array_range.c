#include "main.h"
#include <stdlib.h>

int *array_range(int min, int max)
{
	int *arr;
	int i, j = 0;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(*arr) * ((max - min) + 1));

	if (arr != NULL)
	{
		for (i = min; i <= max; i++)
		{
			arr[j] = i;
			j++;
		}
		return (arr);
	}
	else
		return (NULL);
}

#include "main.h"
/**
 * reverse_array - reverses an array
 * @a: array
 * @n: array.length
 */
void reverse_array(int *a, int n)
{
    int i, temp;
    
    for (i = 0; i < n / 2; i++)
    {
        // Swap the elements from the beginning and end of the array
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
}

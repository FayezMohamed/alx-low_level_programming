#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned long int
 * @index: the index
 *
 * Return: value of bit at index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
    	if (index >= sizeof(unsigned long int) * 8)
    	{
        	return -1;
	}
    	return (int)((n >> index) & 1);
}

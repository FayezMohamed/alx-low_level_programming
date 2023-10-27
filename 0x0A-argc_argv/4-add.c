#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * main - prints sum of positive numbers
 * @argc: number of arguments
 * @argv: array pointing to arguments
 * Return: 0 if numbers are passed, 1 if any argument has symbols
 */
int main(int argc, char *argv[])
{
	int i, sum;

	if (argc < 1)
	{
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
                if (!atoi(argv[i]))
                {
                        printf("%s\n", "Error");
                        return (1);
                }	
	}
	printf("%d\n", sum);
	return (0);
}

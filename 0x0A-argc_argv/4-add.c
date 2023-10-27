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
		printf("%d\n", 0);
	}
	

    	sum = 0;

    	for (i = 1; i < argc; i++)
    	{
        	char *arg = argv[i];
        	int j = 0;

        	while (arg[j] != '\0')
        	{
            		if (arg[j] < '0' || arg[j] > '9')
            		{
                		printf("Error\n");
                		return 1;
            		}
            		j++;
        	}

        	int num = atoi(arg);
        	if (num < 0)
        		{
            			printf("Error\n");
            			return 1;
        		}

        	sum += num;
    	}

    	printf("%d\n", sum);
    	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * main - prints the result of the multiplication, followed by a new line
 * @argc: number of arguments
 * @argv: array pointing to arguments
 *
 * Return: 0 if 2 arguments are passed, 1 if not
 */
int main(int argc, char *argv[])
{
	int product;

	if (argc == 3)
	{
        int num1 = atoi(argv[1]);
        int num2 = atoi(argv[2]);

        product = num1 * num2;
        printf("%d\n", product);
        return 0;
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

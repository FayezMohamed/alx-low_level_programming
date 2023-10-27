#include <stdio.h>
#include "main.h"
/**
 * main - all arguments recieved
 * @argc: number of arguments
 * @argv: pointer to an array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * temp - prints opcodes of a function
 * @arr: array of integers
 * @n: number of opcodes
 */
void temp(const unsigned char *arr, size_t n)
{
    size_t i;

    for (i = 0; i < n; i++)
    {
        printf("%02x", arr[i]);

        if (i < n - 1)
            printf(" ");
    }

    printf("\n");
}

/**
 * main - main function
 * @argc: number of arguments passed
 * @argv: array of pointers to arguments
 *
 * Return: always 0
 */
int main(int argc, char **argv)
{
    int n;

    if (argc != 2)
    {
        printf("Error\n");
        exit(1);
    }

    n = atoi(argv[1]);
    if (n <= 0)
    {
        printf("Error\n");
        exit(2);
    }

    // Print the opcodes of the main function
    temp((const unsigned char *)&main, n);

    return 0;
}


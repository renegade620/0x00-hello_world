#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program add positive numbers
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, x, sum = 0;
	
	for (i = 1; i < argc; i++)
	{
		for (x = 0; argv[i][x]; x++)
		{
			if (argv[i][x] <= '0' || argv[i][x] >= '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[x]);
		
	}
	printf("%d\n", sum);
	return (0);
}

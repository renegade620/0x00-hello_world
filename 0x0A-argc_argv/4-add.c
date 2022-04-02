#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	char *c;

	for (i = 1; i < argc; i++)
		{
			for (x = 0; argv[i][x]; x++)
			{
				c = argv[i][x];
				
				if (c[x] <= '0' || c[x] >= '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[x]);
			c++;
		}
		printf("%d\n", sum);
	
	return (0);
}

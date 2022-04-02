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
	int i;
	unsigned int x, sum = 0;
	char *c;

	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			c = argv[i];

			for (x = 0; x < strlen(c); x++)
			{
				if (c[x] <= 48 || c[x] >= 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(c);
			c++;
		}
		printf("%u\n", sum);
	}
	else
		printf("0\n");
	return (0);
}

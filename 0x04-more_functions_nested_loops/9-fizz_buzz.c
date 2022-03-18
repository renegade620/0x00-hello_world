#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints fizzbuzz numbers
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz\t");
		else if (i % 3 == 0)
			printf("Fizz\t");
		else if (i % 5 == 0)
			printf("Buzz\t");
		else
			printf("%d\t", i);
	}
	printf("\n");
	return (0);
}


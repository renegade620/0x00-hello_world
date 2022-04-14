#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 *
 * @separator: string to be printed between numbers
 * @n: number of integers passed to function
 * @...: more integers
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list x;
	unsigned int i = 0;

	va_start(x, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(x, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(x);
}

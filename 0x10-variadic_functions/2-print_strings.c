#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings -  prints strings
 *
 * @separator: string to be printed between the strings
 * @n: number of strings passed to function
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list s;
	char *c;
	unsigned int i = 0;

	va_start(s, n);

	for (i = 0; i < n; i++)
	{
		c = va_arg(s, char *);

		if (c == NULL)
			printf("(nil)");
		else
			printf("%s", c);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(s);
}

#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all parameters
 *
 * @n: number of parameters passed
 * @...: more parameters
 *
 * Return: 0 if n == 0 else sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list x;
	unsigned int i;
	int sum = 0;

	va_start(x, n);

	for (i = 0; i < n; i++)
		sum += va_arg(x, int);

	va_end(x);
	return (sum);
}

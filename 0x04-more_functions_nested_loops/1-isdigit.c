#include "main.h"

/**
 * _isdigit - checks for a digit 0-9
 *
 * @c: input integer
 *
 * Return: 1 if digit and 0 if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

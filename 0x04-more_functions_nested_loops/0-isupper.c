#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase character
 *
 * @c: input character
 *
 * Return: 1 if uppercase or 0 if not lowercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

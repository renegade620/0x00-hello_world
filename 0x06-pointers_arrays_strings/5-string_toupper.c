#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *
 * @p: string to be uppercased
 *
 * Return: uppercased characters
 */
char *string_toupper(char *p)
{
	int x;

	while (p[x])
	{
		if (p[x] >= 'a' && p[x] <= 'z')
			p[x] -= ' ';
		x++;
	}
	return (p);
}

#include "main.h"

/**
 * _strspn - gets length of a prefix substring
 *
 * @s: substring
 * @accept: bytes
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, x = 0;

	while (accept[i])
	{
		j = 0;

		while (s[j] != 32)
		{
		if (accept[i] == s[j])
			x++;
		j++;
		}
		i++;
	}
	return (x);
}

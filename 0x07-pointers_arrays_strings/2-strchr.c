#include "main.h"

/**
 * strchr - locates a character in a string
 *
 * @s: string
 * @c: character
 *
 * Return: pointer to c or NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0, j;

	while (s[i])
		i++;
	for (j = 0; j <= i; j++)
	{
		if (c == s[j])
		{
			s += j;
			return (s);
		}
	}
	return ('\0');
}

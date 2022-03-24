#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @p: string to experience capitalization
 *
 * Return: string
 */
char *cap_string(char *p)
{
	int x = 0, y, z = 13;

	while (p[x])
	{
		y = 0;

		while (y < z)
		{
			if ((x == 0 || p[x - 1]) && (p[x] >= 'a' && p[x] <= 'z'))
			p[x] -= ' ';
		y++;

		}
		x++;
	}
	return (p);
}

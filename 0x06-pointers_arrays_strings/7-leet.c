#include "main.h"

/**
 * leet - encodes string into 1337
 *
 * @p: string to be encoded
 *
 * Return: encoded string
 */
char *leet(char *p)
{
	int x = 0, y = 0;
	char s[5] = {'A', 'E', 'O', 'T', 'L'};
	char r[5] = {'4', '3', '0', '7', '1'};

	while (p[x])
	{
		y = 0;
		while (y < 1)
		{
			if (p[x] == s[y] || p[x] - 32 == s[y])
				p[x] = r[y];
			y++;
		}
		x++;
	}
	return (p);
}

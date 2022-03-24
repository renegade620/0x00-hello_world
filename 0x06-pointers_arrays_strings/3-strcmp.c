#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: one of the strings to be compared
 * @s2: one of the strings to be compared
 *
 * Return: the comparison
 */
int _strcmp(char *s1, char *s2)
{
	int x, y, z, a, limit;

	x = 0, y = 0, z = 0, a = 0;

	while (s1[x])
		x++;
	while (s2[y])
		y++;
	if (x <= y)
		limit = x;
	else
		limit = y;
	while (z <= limit)
	{
		if (s1[z] == s2[z])
		{
			z++;
			continue;
		}
		else
		{
			a = s1[z] - s2[z];
			break;
		}
		z++;
	}
	return (a);
}

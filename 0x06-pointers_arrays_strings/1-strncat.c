#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: destination string
 * @src: source string
 * @n: limit
 *
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0, z = 0;

	while (dest[x])
		x++;
	while (z < n && src[z])
	{
		dest[x] = src[z];
		x++;
		z++;
	}
	dest[x + n + 1] = '\0';
	return (dest);
}

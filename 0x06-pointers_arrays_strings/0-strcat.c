#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer
 */
char *_strcat(char *dest, char *src)
{
	int x = 0, z;

	while (dest[x])
		x++;
	for (z = 0; src[z] != 0; z++)
	{
		dest[x] = src[z];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}

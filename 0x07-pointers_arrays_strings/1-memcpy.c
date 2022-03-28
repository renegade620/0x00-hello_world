#include "main.h"

/**
 * memcpy - copies memory area
 *
 * @dest: memory area destination
 * @src: memory area source
 * @n: bytes from memory area
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		dest[x] = src[x];
	return (dest);
}

#include "main.h"

/**
 * _strlen - returns length of a string
 *
 * @s: string to be counted
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int x;

	for (x = 0; *s != '\0'; x++)
		s++;
	return (x);
}

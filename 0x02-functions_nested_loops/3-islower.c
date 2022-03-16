#include "main.h"
#include <stdio.h>

/**
 * _islower - check descriprion
 *
 * @c: input character
 *
 * Description - checks for lowercase character
 *
 * Return: 1 if lowercase or 0 if not lowercase
 */
int _islower(int c)
{
	char x;
	
	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == c)
		 return (1);
	}
	return (0);
}

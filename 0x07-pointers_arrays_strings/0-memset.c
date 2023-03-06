#include "main.h"
#include <string.h>

/**
 * _memset - function to set data to memory
 * @s: string
 * @b: a character
 * @n: an integer
 * Return: a string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (a = 0; a < n; a++)
		s[a] = b;

	return (s);
}

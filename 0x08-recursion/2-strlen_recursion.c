#include "main.h"

/**
 * _strlen_recursion - find length of string
 * @s: string
 * Return: string lrngth
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	s++;
	return (1 + _strlen_recursion(s));
}

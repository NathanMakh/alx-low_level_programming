#include "main.h"
#include NULL 0
#include <string.h>

/**
 * _strchr - function to locate character in string
 * @s: string to search
 * @c: target character
 * Return: pointer to ch
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;

	if (s[i] == c)
		return (&s[i]);
	else
		return (NULL);
}

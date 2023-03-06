#include <stdio.h>
#include "main.h"

/**
 * _strchr - function to locate character in string
 * @s: string to search
 * @c: target character
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (NULL);
}

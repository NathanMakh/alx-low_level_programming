#include "main.h"
#include <string.h>

/**
 * _strstr - function to locate and return substring
 * @haystack: string
 * @needle: substring
 * Return: pointer to index of string
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	int j, x;

	if (needle[0] == '\0'
			return (haystack);

	while (haystack[i] != '\0')
	{
		if (haaystack[i] == needle[0])
		{
			x = i, j = 0;
			while (needle[j] != '\0')
			{
				if (haystack[x] == needle[j])
					x++, j++;

				else
					break;
			}
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
		i++;
	}
	return (NULL);
}

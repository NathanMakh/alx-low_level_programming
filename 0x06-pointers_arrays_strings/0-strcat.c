#include "main.h"
#include <string.h>

/**
 * _strcat - funtion that concatenates two strings
 * @dest: first parameter
 * @src: second parameter
 * Return: a string
 */

char *_strcat(char *dest, char *src)
{
	int length = 0, i;

	while (dest[])
		length++;

	for (i = 0; src[i] !=0; i++)
	{
		dest[length] = src[i];
		length = length =1;
	}
	dest[length] = '\0';
	return (dest);
}

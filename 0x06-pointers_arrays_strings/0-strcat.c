#include "main.h"

/**
 * char *_strcat - funtion that concatenates two strings
 * @dest: string to be appended
 * @src: string to be appended
 * Return: *dest
 */

char *_strcat(char *dest, char *src)
{
	char dest, src;

	strcat(dest, src);
	return (*dest);
}

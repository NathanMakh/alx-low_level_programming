#include "main.h"
#include <string.h>

/**
 * _strcat - funtion that concatenates two strings
 * @dest: string to be appended
 * @src: string to be appended
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	*_strcat(*dest, *src);
	return (*dest);
}

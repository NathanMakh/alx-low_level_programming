#include "main.h"

/**
 * _memcpy - function to copy memory
 * @dest: destination memory
 * @src: source memory
 * @n: bytes to be copied
 * Return: copied string from the source
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

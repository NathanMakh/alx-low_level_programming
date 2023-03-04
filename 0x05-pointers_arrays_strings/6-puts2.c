#include "main.h"
#include <string.h>

/**
 * puts2 - function to print every other character
 *@str: string to be printed
 */

void puts2(char *str)
{
	char *s;
	int i;

	for (i = 0; str[i] != '\0' && i < _strlen(str); i += 2)
		_putchar(str[i]);
}

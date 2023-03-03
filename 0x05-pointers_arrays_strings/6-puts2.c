#include "main.h"

/**
 * puts2 - function to print every other character
 */

void puts2(char *str)
{
	char *s;
	int i;

	for (i = 0; i <= strlen(str); i++)
		_putchar(str[i]);
}

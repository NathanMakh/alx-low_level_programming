#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int i = 0;
	int j = (strlen(s) - 1);

	while (i < j)
		swap(i, j);
		i++, j--;
}

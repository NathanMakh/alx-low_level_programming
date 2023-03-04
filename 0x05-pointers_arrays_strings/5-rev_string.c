#include "main.h"

/**
 * rev_string - function that reverses a string
 */

void rev_string(char *s)
{
	int i = 0;
	int j = (strlen(s) - 1);
	char tmp;

	while (i < j)
		swap(i, j);
		i++, j--;
}

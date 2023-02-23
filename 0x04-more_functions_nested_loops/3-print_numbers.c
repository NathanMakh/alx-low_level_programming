#include "main.h"

/**
 * print_numbers - print numbers 0 to 9 followed by newline
 */

void print_numbers(void)
{
	char i;

	for (i = '0', i <= '9', i++)
	{
		putchar(i);
	}
	putchar('\n');
}

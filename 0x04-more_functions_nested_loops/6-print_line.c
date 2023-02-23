#include "main.h"

/**
 * print_line - draw a straight line
 * @n: number of times _ shoulb be printed
 */

void print_line(int n)
{
	if (n >= '0')
		_putchar(n);
	else
		_putchar('\n');
	putchar('\n');
}

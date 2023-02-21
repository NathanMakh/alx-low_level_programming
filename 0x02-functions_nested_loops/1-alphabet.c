#include "main.h"

/**
 * print_alphabet - print the alphabet in lowercase followed by newline
 * Return: always 0
 */

void print_alphabet(void)
{
	char alpha;

	alpha = 'a';
		
	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}

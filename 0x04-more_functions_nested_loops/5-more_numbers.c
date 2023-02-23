#include "main.h"

/**
 * more_numbers - print 10 times the number
 */

void more_numbers(void)
{
	char i;
	int number;

	for (number = 1; number <= 14; number++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i / 10 > 0)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}

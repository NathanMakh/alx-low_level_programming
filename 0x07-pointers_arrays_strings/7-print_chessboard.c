#include "main.h"
#include <string.h>

/**
 * print_chessboard - print chessboard given set 2D array
 * @a: 2d array to print
 */

void print_chessboard(char (*a)[8])
{

	int row;
	int column;

	for (row = 0; row < 8; row++)
	{
		for (column = 0; column < 8; column++)
			_putchar(a[row][column];
		_putchar('\n');
	}
}

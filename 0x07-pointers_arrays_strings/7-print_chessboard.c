#include "main.h"
/**
 * print_chessboard - Prints chessboard
 * @a: Array
 */
void print_chessboard(char (*a)[8])
{
	int n = 8;
	int i, j, val;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			val = a[i][j];
			_putchar(val);
		}
		_putchar('\n');
	}
}

#include "main.h"

/**
 * print_line - Prints Line
 * @n: integer value
 *
 */
void print_line(int n)
{
	int j;

	for (j = 1; j <= n; j++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

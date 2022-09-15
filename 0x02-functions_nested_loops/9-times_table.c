#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * times_table - Entry point
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int i, j;
	char *res;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			res = '0' + i*j;
			_putchar(res[0]);
			_putchar(res[1]);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}

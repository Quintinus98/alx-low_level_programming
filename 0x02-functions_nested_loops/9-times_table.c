#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * putstring - Entry point
 * @n: Number value
 */
void putstring(long n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n / 10)
	{
		putstring(n / 10);
	}
	_putchar(n % 10 + '0');
}
/**
 * times_table - Entry point
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int i, j;
	int res;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			res = i * j;
			if (res / 10)
			{
				putstring(res);
			}
			else
			{
				if (j != 0)
				{
					_putchar(' ');
				}
				res = res + '0';
				_putchar(res);
			}
			if (j == 9)
			{
				j++;
				continue;
			}
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}

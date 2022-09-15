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
 * print_times_table - Entry point
 * @n: Number value
 *
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
	int i, j;
	int res;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				res = i * j;
				if (res >= 100)
				{
					putstring(res);
				}
				else if (res >= 10)
				{
					_putchar(' ');
					putstring(res);
				}
				else
				{
					if (j != 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					res = res + '0';
					_putchar(res);
				}
				if (j == n)
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
}

#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Entry point
 * @n: Number value
 *
 * Return: Always 0 (Success)
 */
void putstring(long n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n/10)
	{
		putstring(n/10);
	}
	_putchar(n%10 + '0');
}

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			putstring(i);
			if (i == 98)
			{
				i++;
				continue;
			}
			_putchar(',');
			_putchar(' ');
		}
	}
	if (n == 98)
	{
		putstring(n);
	}
	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			putstring(i);
			if (i == 98)
			{
				i--;
				continue;
			}
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}

#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Entry point
 * @n: Number value
 *
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			char state = '+';

			if (i < 0)
			{
				_putchar('-');
				i *= -1;
				state = '-';
			}
			if (i >= 100)
			{
				_putchar((i / 10) / 10 % 10 + '0');
				_putchar((i / 10) % 10 + '0');
				_putchar(i % 10 + '0');
			}
			else if (i >= 10)
			{
				_putchar(i/10 + '0');
				_putchar(i%10 + '0');
			}
			else
			{
				_putchar(i + '0');
			}
			if (state == '-')
			{
				i *= -1;
			}
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
		_putchar(n/10 + '0');
		_putchar(n%10 + '0');
	}
	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i > 99)
			{
				_putchar((i/10)/10%10 + '0');
				_putchar((i/10)%10 + '0');
				_putchar(i%10 + '0');
			}
			if (i <= 99)
			{
				_putchar(i/10 + '0');
				_putchar(i%10 + '0');
			}
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

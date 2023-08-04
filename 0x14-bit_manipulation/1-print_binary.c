#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: decimal number to print
*/

void print_binary(unsigned long int n)
{
	unsigned long int mask = 0x8000;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}

	while (mask != 0)
	{
	if ((n & mask) == 0)
		_putchar('0');
	else
		_putchar('1');
	mask = mask >> 1;
	}
}

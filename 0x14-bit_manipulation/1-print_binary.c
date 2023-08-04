#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: decimal number to print
*/

void print_binary(unsigned long int n)
{
	int i, mask;

	for (i = 63; i >= 0; i--)
	{
		mask = (1 << i);
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');
	}
}

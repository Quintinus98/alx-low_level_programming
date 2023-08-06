#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: decimal number to print
*/

void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int i, showBit = 0;

	/**
	 * Example n = 98 -> 10011000 (Binary);
	 * n >> i -> where i = 63;
	 * mask: 0000 all zeros in 63 places.
	 * when i = 7;
	 * mask = 00000001;
	 * we can then compare the 1 (last bit).
	*/
	for (i = 63; i >= 0; i--)
	{
		mask = n >> i;
		if (mask & 1)
		{
			_putchar('1');
			showBit++;
		}
		else if (showBit)
			_putchar('0');
	}
	if (!showBit)
		_putchar('0');
}

#include "main.h"

/**
 * count_bit - returns a count of the bits.
 * @n: decimal number.
 * Return: Bit count.
*/
int count_bit(unsigned long int n)
{
	int i, showBit = 0;
	unsigned long int mask;

	for (i = 63; i >= 0; i--)
	{
		mask = n >> i;
		if (mask & 1)
			showBit++;
		else if (showBit)
			showBit++;
	}
	return (showBit);
}

/**
 * get_bit - prints the binary representation of a number.
 * @n: decimal number
 * @index: index to return.
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask, shift;
	unsigned int cnt = count_bit(n);

	if (n == 0 && index == 0)
		return (0);

	if (index >= cnt)
		return (-1);

	shift = 1 << index;
	mask = n & shift;

	if (mask)
		return (1);
	else
		return (0);
}

#include "main.h"

/**
 * get_bit - prints the binary representation of a number.
 * @n: decimal number
 * @index: index to return.
 * Return: Bit in the selected index
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int shift, mask;

	if (index > 63)
		return (-1);

	shift = 1 << index;
	mask = n & shift;
	return (mask ? 1 : 0);
}

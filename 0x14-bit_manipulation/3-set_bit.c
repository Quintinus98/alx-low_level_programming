#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: decimal number
 * @index:  the index, starting from 0 of the bit you want to set
 * Return: Bit in the selected index
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int shift;

	if (index > 63)
		return (-1);

	shift = 1 << index;
	*n = *n | shift;
	return (1);
}

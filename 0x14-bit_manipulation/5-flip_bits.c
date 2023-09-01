#include "main.h"

/**
 * flip_bits - number of bits you would need to flip to go from n to m.
 * @n: first decimal.
 * @m: second decimal.
 * Return: number of bits flipped.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int shift;
	unsigned int cnt = 0;

	shift = n ^ m;
	while (shift > 0)
	{
		if (shift & 1)
			cnt++;
		shift >>= 1;
	}
	return (cnt);
}

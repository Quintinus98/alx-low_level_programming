#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = get_bit(1024, 10);
	printf("%d\n", n);
	n = get_bit(0, 0);
	printf("%d\n", n);
	n = get_bit(1024, 0);
	printf("%d\n", n);
	return (0);
}


/**
 * count_bit - returns a count of the bits.
 * @n: decimal number.
 * Return: Bit count.
 *
 * int count_bit(unsigned long int n)
 * {
 * int i, showBit = 0;
 * unsigned long int mask;
 *
 * for (i = 63; i >= 0; i--)
 * {
 * mask = n >> i;
 * if (mask & 1)
 * showBit++;
 * else if (showBit)
 * showBit++;
 * }
 * return (showBit);
 * }
*/

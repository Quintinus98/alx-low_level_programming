#include "main.h"

/**
 * binary_to_uint - Binary to unit
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int cnt = 0, sum = 0;
	unsigned int rem, base = 1, num = 0;

	if (!b)
		return (0);

	while (b[cnt])
	{
		if (b[cnt] == '1' || b[cnt] == '0')
			cnt++;
		else
			return (0);
	}
	num = atoi(b);
	while (num)
	{
		rem = num % 10;
		sum += rem * base;
		base *= 2;
		num /= 10;
	}

	return (sum);
}

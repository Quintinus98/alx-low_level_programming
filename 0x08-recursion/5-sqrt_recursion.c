#include "main.h"

/**
 * perform_sqrt - The natural square root of a number
 * @n: number
 * @i: count sequence
 * Return: Always 0
 */

int perform_sqrt(int n, int i)
{
	if (n - (i * i) < 0)
	{
		return (-1);
	}
	if (n - (i * i) == 0)
	{
		return (i);
	}
	else
	{
		return (perform_sqrt(n, i + 1));
	}
}

/**
 * _sqrt_recursion - The natural square root of a number
 * @n: number
 *
 * Return: Always 0
 */

int _sqrt_recursion(int n)
{
	int i = 1;

	if (n == 1)
		return (1);
	if (n - (i * i) > 0)
	{
		return (perform_sqrt(n, i));
	}
	return (-1);
}

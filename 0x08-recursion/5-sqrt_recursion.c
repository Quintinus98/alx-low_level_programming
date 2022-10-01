#include "main.h"

/**
 * _sqrt_recursion - The natural square root of a number
 * @n: number
 *
 * Return: Always 0
 */
int _sqrt_recursion(int n)
{
	int i;

	if (n == 1)
		return (1);
	for (i = 1; i <= n / 2; i++)
	{
		if (i * i == n)
			return (i);
	}
	return (-1);
}

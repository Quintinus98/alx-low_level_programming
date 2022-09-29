#include "main.h"
/**
 * factorial - Returns factorial of a given number
 * @n: Number
 *
 * Return: Always 0
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	while (n >= 0)
	{
		return (n * factorial(n - 1));
	}
	return (-1);
}

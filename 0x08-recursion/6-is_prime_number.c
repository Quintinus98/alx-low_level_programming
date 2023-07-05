#include "main.h"

/**
 * check_prime_number - Checks if a number is prime
 * @n: number
 * @i: counter
 * Return: Always 1 if true and 0 if false.
*/

int check_prime_number(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else
	{
		if (n % i == 0)
		{
			return (0);
		}
		else
		{
			return (check_prime_number(n, i - 1));
		}
		return (1);
	}
}

/**
 * is_prime_number - Checks if a number is prime
 * @n: number
 *
 * Return: Always 1 if true and 0 if false.
 */

int is_prime_number(int n)
{
	int i = n / 2;
	int check;

	if (n <= 1)
	{
		return (0);
	}

	check = check_prime_number(n, i);

	if (check == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

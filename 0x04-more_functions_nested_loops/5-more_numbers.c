#include "main.h"

/**
 * putstring - Entry point
 * @n: Number value
 */
void putstring(long n)
{
	if (n / 10)
	{
		putstring(n / 10);
	}
	_putchar(n % 10 + '0');
}
/**
 * most_numbers - Prints numbers
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			putstring(i);
		}
		_putchar('\n');
	}
}

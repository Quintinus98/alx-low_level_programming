#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: End value.
 */
int main(void)
{
	long m = 612852475143, p = 0;
	long i;

	for (i = 3; i * i <= m; i += 2)
	{
		if (m % i == 0)
		{
			p = i;
			while (m % i == 0)
			{
				m = i;
			}
		}
	}
	if (m > 1)
	{
		p = m;
	}
	printf("%ld", p);

	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = '0';
	int m = '0';

	while (n < '9')
	{
		while (m <= '9')
		{
			if (n == m)
			{
				m++;
				continue;
			}
			putchar(n);
			putchar(m);
			if (n == '8' && m == '9')
			{
				m++;
				n++;
				continue;
			}
			putchar(',');
			putchar(' ');
			m++;
		}
		n++;
		m = n + 1;
	}
	putchar('\n');
	return (0);
}

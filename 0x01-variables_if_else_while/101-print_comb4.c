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
	int m = '1';
	int p = '2';

	while (n <= '7')
	{
		while (m <= '8')
		{
			while (p <= '9')
			{
				putchar(n);
				putchar(m);
				putchar(p);
				if (n == '7' && m == '8' && p == '9')
				{
					m++;
					n++;
					p++;
					continue;
				}
				putchar(',');
				putchar(' ');
				p++;
			}
			m++;
			p = m + 1;
		}
		n++;
		m = n + 1;
		p = m + 1;
	}
	putchar('\n');
	return (0);
}

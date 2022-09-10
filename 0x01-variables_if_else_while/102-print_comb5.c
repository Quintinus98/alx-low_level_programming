#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return - Always 0 (Success)
 */
int main(void)
{
	int a = '0';
	int b = '0';
	int c = '0';
	int d;

	while (a <= '9')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				d = '0';
				d = b + 1;
				while (d <= '9')
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					if (a == '9' && b == '8' && c == '9' && d == '9')
					{
						d++;
						continue;
					}
					putchar(',');
					putchar(' ');
					d++;
				}
				c++;
			}
			b++;
			c = a;
		}
		a++;
		b = '0';
	}
	putchar('\n');
	return (0);
}

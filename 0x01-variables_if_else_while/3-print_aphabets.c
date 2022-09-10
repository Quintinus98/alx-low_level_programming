#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';
	char ch_c = 'A';

	while (ch_c <= 'Z')
	{
		while (ch <= 'z')
		{
			putchar(ch);
			ch++;
		}
		putchar(ch_c);
		ch_c++;
	}
	putchar('\n');
	return (0);
}

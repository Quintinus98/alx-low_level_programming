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
	char ch = 'a';
	
	while (ch <= 'f')
	{
		while (n <= '9')
        	{
                	putchar(n);
                	n++;
        	}
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}

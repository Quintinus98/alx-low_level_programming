#include <stdio.h>
#include "main.h"

void print_me(int n);

int main(void)
{
	print_me(9);
	print_me(19);
	print_me(119);
	print_me(2022);
	return (0);
}

void print_me(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		print_me(n/10);
	}
	_putchar (n%10 + '0');
}

#include "variadic_functions.h"

/**
 * print_numbers - sums all integers
 * @separator: seperator
 * @n: count of integers
 *
 * Return: Sum of variable arguments
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (!separator)
		{
			if (i == n - 1)
				printf("%d", va_arg(ap, int));
			else
				printf("%d%s", va_arg(ap, int), separator);
		}
		else
			printf("%d", va_arg(ap, int));
	}
	va_end(ap);
	printf("\n");
}

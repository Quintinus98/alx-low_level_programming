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

	if (separator == NULL)
		separator = "";

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", va_arg(ap, int));
			break;
		}
		printf("%d%s", va_arg(ap, int), separator);
	}
	va_end(ap);
	exit(EXIT_SUCCESS);
}

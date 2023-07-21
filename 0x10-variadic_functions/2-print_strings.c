#include "variadic_functions.h"

/**
 * print_strings - sums all integers
 * @separator: seperator
 * @n: count of integers
 *
 * Return: Sum of variable arguments
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (!str)
			str = "(nil)";
		if (separator)
		{
			if (i == n - 1)
				printf("%s", str);
			else
				printf("%s%s", str, separator);
		}
		else
			printf("%s", str);
	}
	va_end(ap);
	printf("\n");
}

#include "variadic_functions.h"
#include <unistd.h>

/**
 * print_all - prints all arguments.
 * @format: format
 *
 * Return: Print
*/
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	char *str, *sep = "";

	va_start(ap, format);
	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%s%c", sep, va_arg(ap, int));
			break;
		case 'f':
			printf("%s%f", sep, va_arg(ap, double));
			break;
		case 'i':
			printf("%s%d", sep, va_arg(ap, int));
			break;
		case 's':
			str = va_arg(ap, char *);
			if (!str)
				str = "(nil)";
			printf("%s%s", sep, str);
			break;
		default:
			i++;
			continue;
		}
		sep = ", ";
		i++;
	}
	va_end(ap);
	printf("\n");
}

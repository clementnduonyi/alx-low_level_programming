#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers -prints numbers followed by a new line
 * @separator: string to be printed
 * @n: required argument
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list var;
	unsigned int i;

	va_start(var, n);

	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(var, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(var);
}

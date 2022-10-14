#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: Strings to be printed
 * @n: required agument
 *
 * Return nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list var;
	unsigned int i;
	char *j;

	va_start(var, n);

	for (i = 0; i < n; i++)
	{
		j = (va_arg(var, char*));

		if (j != NULL)
			printf("%s", j);
		else
			printf("(nil)");
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(var);
}

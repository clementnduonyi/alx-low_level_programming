#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Prints a name
 * @name: Name to br printed
 * @f: function pointer
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;

	f(name);
}

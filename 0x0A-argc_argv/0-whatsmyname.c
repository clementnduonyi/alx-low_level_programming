#include "main.h"
#include <stdio.h>
/**
 * main - Prints program name followed by a new line
 * @argc: argument counts
 * @argv: Array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}

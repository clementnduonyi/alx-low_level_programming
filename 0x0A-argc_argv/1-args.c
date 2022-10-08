#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of arguments passed into it
 * @argc: argument count
 * @argc: array of argument
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argv)
		printf("%d\n", argc);

	return (0);
}	

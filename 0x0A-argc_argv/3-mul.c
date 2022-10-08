#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers.
 * @argc: argument count
 * @argv: array of argument
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, j, mulp;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);

	mulp = i * j;
	printf("%d\n", mulp);

	return (0);
}

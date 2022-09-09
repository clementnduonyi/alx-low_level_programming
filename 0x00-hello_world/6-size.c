#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success) 
 */
int main(void)
{
	char charSize;
	int intSize;
	long int unintSize;
	long long int ununintSize;
	float floatSize;

	printf("Size of a char: %zu byte(s)\n", sizeof(charSize));
	printf("Size of an int: %zu byte(s)\n", sizeof(intSize));
	printf("Size of a long int: %zu byte(s)\n", sizeof(unintSize));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(ununintSize));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatSize));
	return (0);
}

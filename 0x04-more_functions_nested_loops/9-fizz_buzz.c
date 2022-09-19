#include <stdio.h>
/**
 * main - prints the numbers from 1 to 100,
 * followed by a new line. But for multiples
 * of three print Fizz instead of the number
 * and for the multiples of five print Buzz.
 * For numbers which are multiples of both
 * three and five print FizzBuzz.
 * @nums: input numbers
 *
 * Return: Always 0;
 */
int mian(void)
{
	int nums;

	for (nums = 1; nums <= 100; nums++)
	{
		if (nums % 3 == 0 && nums % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (nums % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (nums % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", nums);
		}
	}
	printf("\n");
	return (0);
}

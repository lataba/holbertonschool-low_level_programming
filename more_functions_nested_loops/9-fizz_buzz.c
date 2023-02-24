#include "main.h"
#include <stdio.h>

/**
 * main - check the number
 *
 * Return: Numbers and multiples.
 */

int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else
			printf("%d", i);
		printf(" ");
	}
	printf("\n");
	return (0);
}

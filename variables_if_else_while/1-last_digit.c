#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Ultimo digito'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, ultimo;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ultimo = n;
	while (ultimo > 9)
		ultimo = ultimo % 10;
	printf("Last digit of %d is ", n);
	if (ultimo == 0)
		printf("and is 0");
	else if (ultimo > 5)
		printf("and id greater than 5");
	else
		printf("and is less than 6 and not 0");
	return (0);
}

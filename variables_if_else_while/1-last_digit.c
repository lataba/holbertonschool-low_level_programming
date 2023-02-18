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
	while ((ultimo > 9) != (ultimo < -9))
		ultimo = ultimo % 10;
	printf("Last digit of %d is ", n);
	if (ultimo == 0)
		printf("%d and is 0", ultimo);
	else if (ultimo > 5)
		printf("%d and is greater than 5", ultimo);
	else
		printf("%d and is less than 6 and not 0", ultimo);
	return (0);
}

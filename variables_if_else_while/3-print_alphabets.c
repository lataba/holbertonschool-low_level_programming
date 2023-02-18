#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Alfabeto'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, n;

	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";

	char ALPHABET[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ$";

	for (i = 0; i < 26; i++)
		putchar(alphabet[i]);
	for (n = 0; n < 27; i++)
		putchar(ALPHABET[n]);
	putchar('\n');
	return (0);
}


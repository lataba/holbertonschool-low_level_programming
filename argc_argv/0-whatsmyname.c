#include <stdio.h>

/**
 * main - function that prints ist own name.
 * @argc: quantity of args
 * @argv: the name
 * Return: If is correct, returns zero
 */

int main(int argc, char *argv[])

{
	printf("%s\n", argv[0]);
	(void) argc;
	return (0);
}

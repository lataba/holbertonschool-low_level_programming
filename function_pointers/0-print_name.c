#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name of the person
 * @f: a function pointer that takes char and returns void
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))

{
		f(name);
}

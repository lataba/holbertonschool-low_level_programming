#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 * @array: the array
 * @size: the array size
 * @action: the function to be executed
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))

{
	unsigned int i;

	if (action == NULL)
		return;
	if (array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

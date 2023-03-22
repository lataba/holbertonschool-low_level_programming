#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: the array
 * @size: the array size
 * @cmp: the function to be use to compare values
 *
 * Return: Nothing.
 */

int int_index(int *array, int size, int (*cmp)(int))

{
	int i = 0;

	if ((array == NULL) || (cmp == NULL))
		return (-1);

	if (size <= 0)
		return (-1);

	while ((i < size) && (cmp(array[i]) == 0))
		i++;
	if (i == size)
		return (-1);
	return (i);
}

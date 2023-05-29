#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	int i = 0, tope = size;

	if (array == NULL)
		return (-1);

	for (i = 0; i < tope; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

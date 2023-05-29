#include "search_algos.h"

/**
 * binary_search - function that searches for a value in an array
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, first = 0, tope = size - 1, mid = 0;

	if (array == NULL)
		return (-1);

	while (first <= tope)
	{
		mid = (tope + first) / 2;
		i = first;

		printf("Searching in array:");

		for (; i <= tope; ++i)
		{
			if (i != first)
				printf(", %d", array[i]);
			else
				printf(" %d", array[i]);
		}
		printf("\n");

		if (array[mid] < value)
			first = mid + 1;
		else if (array[mid] > value)
			tope = mid - 1;
		else
			return (mid);
	}
	return (-1);
}

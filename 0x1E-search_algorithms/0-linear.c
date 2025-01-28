#include <stdio.h>
#include "search_algos.h"
/**
 * linear_search - searches for a vaue in arrays using linear serch
 * @array: array to be searched
 * @size: size of the array
 * @value: value to search for
 * Return: index if found or -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || size == 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

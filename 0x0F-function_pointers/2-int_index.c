#include <stdio.h>
#include "function_pointers.h"

/**
  * int_index - searches for an integer
  * @array: array
  * @size: number of elements in the array
  * @cmp: pointer to function to be used to compare values
  * Return: index of the first element
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || array == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}

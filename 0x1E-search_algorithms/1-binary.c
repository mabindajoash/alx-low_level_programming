#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array using binary search
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: Index where the value is located
 */
int binary_search(int *array, size_t size, int value)
{
	int mid;
	int l = 0;
	int r = size - 1;

	if (!array || size == 0)
		return (-1);

	while (l <= r)
	{
		iterate(array, l, r);
		mid = (l + r) / 2;
		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			r = mid - 1;
		else
			l = mid + 1;
	}
	return (-1);
}
/**
 * iterate - iterate the array
 * @start: start of the array
 * @end: end of the array
 * @array: array to be iterated
 * Return: void
 */
void iterate(int *array, int start, int end)
{
	int i;

	printf("Searching in array: ");
	for (i = start; i < end; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[end]);
}

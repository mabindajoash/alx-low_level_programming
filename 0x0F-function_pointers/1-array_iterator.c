#include <stdio.h>
#include "function_pointers.h"

/**
  * array_iterator - executre a function given as a parameter
  * @array: the array
  * @size: size of the array
  * @action: function pointer
  * Return: void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size == 0 && array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}


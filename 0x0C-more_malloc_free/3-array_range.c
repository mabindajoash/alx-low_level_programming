#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
  * array_range - create an array range
  * @min: minimum integer
  * @max: maximum integer
  * Return: pointer to the newly created array
  */
int *array_range(int min, int max)
{
	int i, j;
	int *n;

	if (min > max)
		return (NULL);
	n = malloc(((max - min) + 1) * sizeof(int));
	if (!n)
		return (NULL);
	/* copy values */
	for (i = min, j = 0; i <= max; i++, j++)
		n[j] = i;
	return (n);
}

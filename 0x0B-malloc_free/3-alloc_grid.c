#include <stdio.h>
#include <stdlib.h>

/**
  * alloc_grid - 2 dimensional array of integers
  * @width: width of the grid
  *  @height: height of the grid
  * Return: a pointer to the 2D array
  */
int **alloc_grid(int width, int height)
{
	int **array;
	int i;
	int j;

	if ((height <= 0) || (width <= 0))
		return ('\0');
	array = (int **)malloc(height * sizeof(int *));
	if (array == NULL)
		return ('\0');
	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(width * sizeof(int));
		if (array[i] == NULL)
			return ('\0');
	}
	for (i = 0; i < height; height++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}


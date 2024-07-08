#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_chessboard - prints the chessboard
 * @a: two dimensional array
 * Return: 2d array
 */

void print_chessboard(char (*a)[8])
{
	int i, j, rows = 0;

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%d", a[i][j]);
			if (j == 8)
			{
				printf("\n");
			}
		}
	}
}

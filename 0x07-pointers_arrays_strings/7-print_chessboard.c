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
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar([i][j])
		}
	}
	_putchar('\n');
}

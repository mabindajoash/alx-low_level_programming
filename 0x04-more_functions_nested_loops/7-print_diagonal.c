#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_diagonal - draws a diagonal line on terminal
 * @n: number of times character is printed
 * Return: void
 */

void print_diagonal(int n)
{
	int d;
	int k;
	
	if (n > 0)
	{
		for (d = 0; d < n; d++)
		{
			for (k = 0; k < d; k++)
				_putchar(' ');
			_putchar('\\');
			
		if (d == n - 1)
				continue;
			
		_putchar('\n');
		}
	}
	_putchar('\n');
}

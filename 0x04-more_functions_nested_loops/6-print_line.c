#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_line - draws a straight line in terminal
 * @n: number of times character is printed
 * Return: void
 */

void print_line(int n)
{
	int length;

	if (n > 0)
	{
		for (length = 0; length < n; length++)
			_putchar('_');
	}
	_putchar('\n');
}

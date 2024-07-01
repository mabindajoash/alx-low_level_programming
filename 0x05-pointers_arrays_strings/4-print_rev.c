#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 * Return: void
 */

void print_rev(char *s)
{
	int length = 0;
	int i;

	while (s[i++])
		length++;
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[length]);
	}

	_putchar('\n');
}

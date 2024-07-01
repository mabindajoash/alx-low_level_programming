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
	while (s[length] != '\0')
		length++;
	for (int i = length - 1;length >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}

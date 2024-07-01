#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints every other character of a string
 * @str: the string
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	int len = 0;

	while (str[i++])
		len++;
	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}

#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half a string
 * @str: string to be evaluated
 * Return: void
 */

void puts_half(char *str)
{
	int len = 0;

	int n;

	char *z = str;

	while (*z != '\0')
	{
		z++;
	}
	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len + 1) / 2;
	}
	for (; n < len; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}

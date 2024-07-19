#include <stdio.h>
#include "main.h"

/**
  * print_rev - prints a given string in reverse
  * @s: the string to be reversed
  * Return: 0
  */
void print_rev(char *s)
{
	int len = 0;
	int i;
	char *temp = s;

	/* find lenght*/
	while (*temp)
	{
		temp++;
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

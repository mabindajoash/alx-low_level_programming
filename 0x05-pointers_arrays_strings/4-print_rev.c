#include "main.h"
/**
  *print_rev - print string in reverse
  *@s: takes char s as a parameter
  *Return: void
  */
void print_rev(char *s)
{
	int i;
	int length = 0;

	while (s[i++])
		length++;
	for (i = length - 1; i >= 0; i--)
		_putchar(s[length]);
	_putchar('\n');
}

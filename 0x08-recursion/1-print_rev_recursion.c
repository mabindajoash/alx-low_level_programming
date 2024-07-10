#include <stdio.h>
#include "main.h"

/**
  * _print_rev_recursion - print a string in reverse
  * @s: take char s as an argument
  *Return: void
  */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_print_rev_recursion(s++);
	_putchar(*s);
}

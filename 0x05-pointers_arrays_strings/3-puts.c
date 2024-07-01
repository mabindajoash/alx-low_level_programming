#include "main.h"
#include <unistd.h>
/**
  *_puts - prints a string followed by a new line
  *@str: takes in char str
  *Return: void
  */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

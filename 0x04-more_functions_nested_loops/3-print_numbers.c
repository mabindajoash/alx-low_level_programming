#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
  * print_numbers - print numbers 0-9
  *Return: no return value
  */

void print_numbers(void);
{
	for (int i = '0'; i < '10'; i++)
		_putchar(i);
	_putchar('\n');
}

#include <stdio.h>
#include "main.h"

/**
  * print_sign - prints the sign of a number
  * @n: takes int n as a parameter
  * Return: 1 if greater than 0
  * 0 if n is zero
  * and -1 if n is less than 0
  */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		putchar ('0');
	}
	else
	{
		return (-1);
		putchar ('-');
	}
}

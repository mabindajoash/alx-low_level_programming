#include "main.h"

/**
  * print_last_digit - print the last digit of a number
  * @n: take int n as parameter to be passed
  * Return: last digit of the number
  */

int print_last_digit(int n)
{
	int c;

	c = n % 10;
	if (c < 0)
		c = -c;
	_putchar(c + '0');
	return (c);
}

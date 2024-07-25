#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
  * sum_them_all - calculates sum of all its parameters
  * @n: number of arguments
  * Return: sum of the parameters
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int result = 0;
	va_list my_number;

	if (n == 0 || my_number == NULL)
		return (0);
	va_start(my_number, n);
	for (i = 0; i < n; i++)
	{
		result += va_arg(my_number, int);
	}
	va_end(my_number);
	return (result);
}

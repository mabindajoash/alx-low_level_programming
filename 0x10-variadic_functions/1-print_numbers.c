#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * print_numbers - print nos followed by a new line
  * @separator: string to be printed between numbers
  * @n: number of integers passed to the function
  * Return: void
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list my_int;

	if (n == 0)
		return;
	va_start(my_int, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(my_int, int));
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(my_int);
}

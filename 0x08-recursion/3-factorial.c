#include "main.h"
#include <stdio.h>

/**
  * factorial - calculates factorial of a given number
  *@n: takes int n as a parameter
  *Return: returns factorial as an int
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}

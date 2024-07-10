#include "main.h"
#include <stdio.h>

/**
  * factorial - calculates factorial of a given number
  *@n: takes int n as a parameter
  *Return: returns factorial as an int
  */
int factorial(int n)
{
	int count = 0;
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (count + factorial(n - 1));
}

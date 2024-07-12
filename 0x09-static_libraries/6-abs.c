#include <stdio.h>
#include "main.h"

/**
  * _abs - computes the absolute value of an int
  * @n: number to be computed
  * Return: the computed number
  */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

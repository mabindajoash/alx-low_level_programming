#include <stdio.h>
#include "main.h"
/**
  *_pow_recursion - calculates the value of x raised to the power of y
  * @x: takes x as a parameter
  * @y: takes y as a parameter
  * Return: result of x raised to power y
  */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

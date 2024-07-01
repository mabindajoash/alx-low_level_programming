#include <stdio.h>
#include "main.h"
/**
  *swap_int - swaps the value of two integers
  *@a: takes in a as a parameter
  *@b: takes in b as a parameter
  *Return: no return value
  */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

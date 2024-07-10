#include "main.h"
#include <stdio.h>

/**
  * _strlen_recursion - calculates the length of a string
  *@s: takes s as a parameter
  *Return: returns lenght of the string as an int
  */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return 1 + _strlen_recursion(s+1);
}

#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for a digit 0 through 9
 * @c: to be checked
 * Return: 1 if succesful, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

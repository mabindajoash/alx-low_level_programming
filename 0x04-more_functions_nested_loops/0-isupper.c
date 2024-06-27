#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase characters
 * @c: character to be chacked
 * Return: 1 if successful, 0 otherwise 
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

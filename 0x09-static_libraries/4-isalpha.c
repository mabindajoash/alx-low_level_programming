#include <stdio.h>
#include "main.h"

/**
  * _isalpha - checks for al[phabetic character
  * @c: takes c as a parameter. the letter to be checked
  * Return: 1 if c is a letter an 0 if not
  */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

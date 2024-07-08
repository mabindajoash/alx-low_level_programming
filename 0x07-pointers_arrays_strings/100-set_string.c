#include "main.h"
#include <stdio.h>

/**
 * set_string - sets the value of a pointer to char
 * @s: pointer to address of string s
 * @to: string to set value to
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}

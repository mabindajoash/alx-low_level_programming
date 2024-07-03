#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rot13 - encodes a string
 * @c: string to be encoded
 * Return: resulting encoded string
 */

char *rot13(char *c)
{
	int i;

	for (i = 0; c && c[i]; ++i)
	{
		if (c[i] >= 'a' && (c[i] + 13) <= 'z')
		{
			c[i] = c[i] + 13;
		}
	}
	return (c);
}

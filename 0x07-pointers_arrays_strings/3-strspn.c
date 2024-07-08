#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strspn - gets the lenth of a prefix substring
 * @s: string to be evaluated
 * @accept: contains bytes
 * Return: number of bytes in intial segment
 */

unsigned int_strspn(char *s, char *accept)
{
	int i;

	unsigned int len = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				len++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (len);
		}
		s++;
	}
	return (len);
}

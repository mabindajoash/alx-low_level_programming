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
	int k;

	unsigned int len = 0;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
			{
				len++;
				break;
			}
			else if (accept[k + 1] == '\0')
				return (len);
		}
		s++;
	}
	return (len);
}

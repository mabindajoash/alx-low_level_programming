#include <stdio.h>
#include "main.h"

/**
  * _strspn - returns the number of bytes that match
  * @s: take in char *s as argument
  * @accept: takes in accept as an argument
  * Return: number of bytes
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int match;

	while (*s)
	{
		match = 0;
		char *a;

		for (a = accept; *a; ++a)
		{
			if (*s == *a)
			{
				match = 1;
				break;
			}
		}
		if (!match)
			break;
		++count;
		++s;
	}
	return (count);
}
